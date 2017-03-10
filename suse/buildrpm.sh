#!/bin/bash
#set -e
_dir=`dirname "$(readlink -f "${0}")"`
_basedir=${_dir}/..
cd ${_basedir}
if [ -f ${_basedir}/suse/hedera*.rpm ]; then
    rm -f ${_basedir}/suse/hedera*.rpm
fi
if [ -f ${_basedir}/suse/hedera.spec ]; then
    rm -f ${_basedir}/suse/hedera.spec
fi
if [ -d ${_basedir}/suse/hedera ]; then
    rm -rf ${_basedir}/suse/hedera
fi
mkdir -p ${_basedir}/suse/hedera/usr/share
#xdg/common stuff
cp -R ${_basedir}/Other/* ${_basedir}/suse/hedera/usr/share
#since people are not allowed to have choices on postinst scripts...
sh ${_basedir}/suse/hedera/usr/share/icons/Hedera/config.sh -i
#plasma 5 stuff
cp -R ${_basedir}/Plasma/* ${_basedir}/suse/hedera/usr/share
#debian stuff, default configs.
cp -R ${_basedir}/Manual/Configs/* ${_basedir}/suse/hedera
#infopages kf5 compat
mkdir -p ${_basedir}/suse/hedera/usr/share/kf5
cp -R ${_basedir}/Manual/kf5/infopage ${_basedir}/suse/hedera/usr/share/kf5/infopage.hedera
#infopages kde4 compat
mkdir -p ${_basedir}/suse/hedera/usr/share/kde4/apps/kdeui
cp -R ${_basedir}/Manual/kf5/infopage ${_basedir}/suse/hedera/usr/share/kde4/apps/kdeui/about.hedera
#creating the spec file:
cat <<\EOF> ${_basedir}/suse/hedera.spec
Buildroot: BUILDROOT
Name: hedera
Version: VERSION
Release: 1
Summary: Simple and Eye-Friendly GUIKit for Plasma or Xfce.
License: see /usr/share/doc/hedera/copyright
Requires: noto-sans-fonts breeze5-cursors, hicolor-icon-theme
Provides: hedera = %version, gnome-icon-theme
Obsoletes: hedera < %version
Recommends: breeze5-decoration, breeze5-style, kwin5, libgtk-3-0 >= 3.20, gtk2-engine-mist, gtk2-engine-murrine, gtk3-nocsd, yakuake, qupzilla, albert, qterminal, slim, konsole, qt5ct, libqt4-x11, plank, xsettingsd, xfwm4, marco, metacity, muffin, openbox, xfce4-notifyd, xfdashboard, onboard
Group: System/GUI/KDE
BuildArch: noarch

%define _rpmdir ../
%define _unpackaged_files_terminate_build 0
%define _source_payload w9.xzdio
%define _binary_payload w9.xzdio
%description
Easy to use GUIKit.
EOF
_hederaver=$(cat debian/changelog|head -1|sed 's/[a-z;= ()]//g;s/-.*//')
sed -i 's\BUILDROOT\'$_dir/hedera'\g' ${_basedir}/suse/hedera.spec
sed -i 's/VERSION/'$_hederaver'/g' ${_basedir}/suse/hedera.spec
#post install
printf '\n\x25post\n' >>${_basedir}/suse/hedera.spec
cat ${_basedir}/debian/postinst|sed '1d' >>${_basedir}/suse/hedera.spec
#pre uninstall
printf '\n\x25preun\n' >>${_basedir}/suse/hedera.spec
cat ${_basedir}/debian/prerm|sed '1d' >>${_basedir}/suse/hedera.spec
#post uninstall
printf '\n\x25postun\n' >>${_basedir}/suse/hedera.spec
cat ${_basedir}/debian/postrm|sed '1d' >>${_basedir}/suse/hedera.spec
#files section!
printf '\n\x25files\n\x25defattr(-,root,root,-)\n' >>${_basedir}/suse/hedera.spec
cd ${_basedir}/suse/hedera
printf 'creating filelist - this could take a while...\n'
find usr -type d -exec printf '\x25dir "/'{}'"\n' >>${_basedir}/suse/hedera.spec \;
find etc -type d -exec printf '\x25dir "/'{}'"\n' >>${_basedir}/suse/hedera.spec \;
find usr -not -type d -exec printf '"/'{}'"\n' >>${_basedir}/suse/hedera.spec \;
find etc -not -type d -exec printf '\x25config "/'{}'"\n' >>${_basedir}/suse/hedera.spec \;
rpmbuild -bb --buildroot=${_basedir}/suse/hedera ${_basedir}/suse/hedera.spec
if [ -f ${_basedir}/suse/noarch/hedera*.rpm ]; then
    mv ${_basedir}/suse/noarch/hedera*.rpm ${_basedir}/suse
    rm -rf ${_basedir}/suse/noarch ${_basedir}/suse/hedera.spec
fi

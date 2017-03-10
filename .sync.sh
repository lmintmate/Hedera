#!/bin/sh
if [ ! -t 0 ]; then
	x-terminal-emulator -e "$0"
	exit 0
fi
basedir=`dirname "$(readlink -f "${0}")"`
cd ${basedir}
find ${basedir} -name '.directory' -exec rm -f {} \;
#find ${basedir}/suse -name '*.rpm' -exec rm -f {} \;
#find ${basedir}/debian -name '*.deb' -exec rm -f {} \;
if type parallel &>/dev/null; then
	find . -not -type l -name '*.png' -not -wholename '*icons*' -not -name "5120x2160.png" | parallel --no-notice -j "$(expr \( $(nproc) \* 8 \) - 1)" optipng -o7 -zm1-9 -strip all -nc "{}"
else
	find . -not -type l  -name '*.png' -not -wholename '*icons*' -not -name "5120x2160.png" -print0 | xargs -n 1 -P 128 -0 optipng -o7 -zm1-9 -strip all -nc
fi
fakeroot debian/rules binary
#remove old deb and replace it by newer
find ${basedir}/debian -name '*.deb' -exec rm ${basedir}/pkgs/hedera*.deb \;
find ${basedir}/debian -name '*.deb' -exec mv {} ${basedir}/pkgs/hedera-current_testing.deb \;
#bash suse/buildrpm.sh
#remove old rpm and replace it by newer
#find ${basedir}/suse -name '*.rpm' -exec rm ${basedir}/pkgs/*.rpm \;
#find ${basedir}/suse -name '*.rpm' -exec mv {} ${basedir}/pkgs/hedera-current_tumbleweed.rpm \;
#rm -rf $HOME/rpmbuild
#its a pure distribution repository so always kill history!
cd ${basedir}
rm -rf .git
git init
git add .
#srsly git...
LANG=C
#MESSAGE="$(git status)"
#MESSAGE=$(yad --title="Commit MSG" --no-buttons --geometry=400 --entry)
MESSAGE="$(date)"
#read MESSAGE
git commit -m "$MESSAGE"
git remote add origin https://github.com/sixsixfive/Hedera.git
git push -u --force origin master
printf "\n...done\n"
sleep 5
exit

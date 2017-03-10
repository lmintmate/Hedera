A theme for everyone who needs a consistent theme that is available for both GTK and Qt.

![preview](preview.gif)

## Contents

* [Install](#install)
 - [Packages](#packages)
   - [Debian](#debiantesting-unstable)
    - [*buntus](#buntus)
    - [SuSE](#suse-only-tested-on-tumbleweed)
    - [Manjaro/Arch](#manjaroarch-third-party)
 - [Manual](#manual-install)
* [FAQ](#faq)
 - [Qt](#qt)
   - [Plasma issues](#kdeplasma-icon-theme-etc-is-not-applied)
    - [Qt on GTK Desktops](#howto-set-the-qt-style-on-non-qt-desktops)
 - [GTK](#gtk)
   - [GTK on Qt-Desktops](#gtk-on-qt-desktops)
    - [GTK2](#gtk2)
    - [GTK3](#gtk3)
 - [Icons](#icon-theme)
   - [How to change the folder color](#how-to-change-the-folder-color)
    - [Big icons are ugly](#big-icons-are-ugly)
    - [Why no SVG icon theme?](#why-no-svg-icon-theme)
    - [Limitations and Bugs](#limitations-and-bugs)
 - [Xfwm](#xfwm-theme)
 - [Metacity & Co](#metacity-theme)

## Install

### Packages

Official prebuilt packages are available [here](https://github.com/sixsixfive/Hedera/tree/master/pkgs).

#### Debian(testing, unstable)

it is possible to build and install a debian package eg:

```
su -c "apt install --no-install-recommends fakeroot unzip wget debhelper dpkg-dev libfile-fcntllock-perl"
wget https://github.com/sixsixfive/Hedera/archive/master.zip
unzip -q master && cd Hedera-master
fakeroot debian/rules binary
```
#### *buntus

same as debian however use sudo instead of su eg:

```
sudo apt install --no-install-recommends fakeroot unzip wget debhelper dpkg-dev libfile-fcntllock-perl
```

Note: that *buntus usually come with ancient and heavy modified packages, so not all themes might work!

#### SuSE, only tested on Tumbleweed

```
sudo zypper install --no-recommends unzip wget rpm-build findutils sed 
wget https://github.com/sixsixfive/Hedera/archive/master.zip
unzip -q master && cd Hedera-master
sh suse/buildrpm.sh
sudo zypper install --no-recommends hedera-current_tumbleweed.rpm
```

#### Manjaro/Arch (third-party)

* [Packages](http://download.tuxfamily.org/gericom/manjaro) can be found [@gericoms](https://github.com/gericom-hummer) Manjaro Repo.
* It is also available at the [AUR](https://aur.archlinux.org/packages/hedera-icon-theme-git/)

### Manual install

just copy the theme dirs/files to Application theme dirs eg:

```
wget https://github.com/sixsixfive/Hedera/archive/master.zip
7z x master.zip
```

there are 3 folders:

* Plasma -  holds all Plasma specific stuff.
* Other -  holds all non-plasma stuff.

the content of those two folders, usually just needs to be copied to the **$SYS-** or **$LOCALPREFIX**

* Manual - includes stuff that needs some manual work(eg overwriting/backuping files, dnd install)

##### Kinfopages(eg systemsettings classic view, digikam & skrooge startup pages)

```
$SYSPREFIX/share/kf5/infopage/<themefiles>
```

*  KDE4 compat

```
$SYSPREFIX/share/kde4/apps/kdeui/about/<themefiles>
```

## FAQ

### Qt

#### KDE/Plasma: Icon theme etc is not applied

Due Plasma/KDEs caching you might need to re-login!

you can also remove kde cache files under $HOME/.cache to force their recreation eg:

```
find ~/.cache \( -name "*.kcache" -o -name "plasma-*" -o -name "ksycoca5_*" \) -exec rm -f {} \; && kbuildsycoca5
```

#### Howto set the Qt-Style on non Qt-desktops

Install [Qt5ct](https://sourceforge.net/projects/qt5ct/) and add the following to **/etc/X11/Xsession.d/100-qtstyle**

```
export QT_QPA_PLATFORMTHEME=qt5ct
export QT_PLATFORMTHEME=qt5ct
export QT_PLATFORM_PLUGIN=qt5ct
```

or if you have KDE/Plasma besides installed add:

```
export QT_QPA_PLATFORMTHEME=kde
export QT_PLATFORMTHEME=kde
export QT_PLATFORM_PLUGIN=kde
```

to force it over the GNOME integration plugin!

There is also another Tool [QtPalettor](https://github.com/spillerrec/QtPalettor) to set the colors, however haven't tried this yet.

Please note that the Darker subtheme needs Qt5ct due the stylesheet!

### GTK

#### GTK on Qt-Desktops

**Do yourself a favor and don't use the KCM-gtk module to set your GTK themes on KDE, it will mostly break your themes. (eg. theme internal font settings)**

If you have trouble to set the same font size on Qt and GTK make sure that the both toolkits use the same DPI and hinting styles.

There is an [Xsettings-client](https://github.com/KDE/xsettings-kde) available for KDE/Plasma that will help you a lot.You can also use [Xsettingsd](https://github.com/derat/xsettingsd) or the manual way below(NOTE THAT THIS WILL AFFECT ALL DESKTOPS).

#### GTK2!

The GTK2 theme depends on the GTK2 murrine and pixbuf engine it is also recommended to install the mist engine!

create a file ~/.gtkrc-2.0 (globally: /etc/gtk-2.0/gtkrc) with something like:

```
include "$HOME/.local/share/themes/Hedera/gtk-2.0/gtkrc"
gtk-toolbar-style=GTK_TOOLBAR_ICONS
gtk-theme-name="Hedera"
gtk-fallback-icon-theme="hicolor"
gtk-icon-theme-name="Hedera"
gtk-menu-popup-delay=50
gtk-tooltip-timeout=1000
gtk-enable-mnemonics=1
gtk-auto-mnemonics=1
gtk-alternative-button-order=1
gtk-recent-files-enabled=0
gtk-enable-animations=1
gtk-menu-images=1
gtk-error-bell=0
gtk-button-images=1
gtk-cursor-theme-name="breeze_cursors"
gtk-menu-images=1
gtk-xft-dpi=96
gtk-font-name="Noto Sans Regular 10"
```

* See also: [GTK2 Settings](https://developer.gnome.org/gtk2/stable/GtkSettings.html#GtkSettings.properties)

#### GTK3

The GTK3 theme recommends [GTK3-NOCSD](https://github.com/PCMan/gtk3-nocsd) and to disable the GTK3 overlay scrollbars (export GTK_OVERLAY_SCROLLING=0)!

create a file ~/.config/gtk-3.0/settings.ini (globally: /etc/gtk-3.0/settings.ini) with something like:

```
[Settings]
gtk-theme-name=Hedera
gtk-icon-theme-name=Hedera
gtk-shell-shows-app-menu=0
gtk-shell-shows-menubar=0
gtk-dialogs-use-header=0
gtk-menu-popup-delay=50
gtk-tooltip-timeout=1000
gtk-enable-mnemonics=1
gtk-auto-mnemonics=1
gtk-alternative-button-order=1
gtk-recent-files-enabled=0
gtk-dialogs-use-header=0
gtk-enable-animations=1
gtk-menu-images=1
gtk-enable-accels=1
gtk-decoration-layout=":menu"
gtk-button-images=1
gtk-fallback-icon-theme=hicolor
gtk-cursor-theme-name=breeze_cursors
gtk-menu-images=1
gtk-xft-dpi=96
gtk-font-name="Noto Sans Regular 10"
``` 

* See also: [GTK3 Settings](https://developer.gnome.org/gtk3/stable/GtkSettings.html#GtkSettings.properties)

### Icon theme

#### How to change the folder color

You can change the color of the default folders with the config script eg:

    su -c "/usr/share/icons/Hedera/config.sh"

#### Big icons are ugly

The theme is made for 48px and I wouldn't recommend to go highter than 96px however there are higher sizes included since KDE requires them and they can be used on HiDPI desktops.

#### Why no SVG icon theme

* poor support by both GTK(has issues with masks) and Qt(supports only SVG tiny 1.1).
* PNGs require more space but the performance is alot better since everything is already prerendered

#### Limitations and Bugs

* some smaller icons are fuzzy cause they are scaled down from other sizes(sry, but I don't have plenty of time but someday they will be complete I guess ;)
* some icons are still missing (thats an endless task) 
* Xfce misses some features, since exo can't follow symlinks[10126](https://bugzilla.xfce.org/show_bug.cgi?id=10126)
* Due Qt-bug [33123](https://bugreports.qt.io/browse/QTBUG-33123) & [43620](https://bugreports.qt.io/browse/QTBUG-43620) all extra folders are ignored (Workaround HederaQt available)

### Xfwm theme

The most options are hardcoded in this theme you can only change them by editing the themerc

### Metacity theme

Like all other WM-themes this one was created for the use with a composite extension(shadows). Also note that there is no way to change the radius for the borders in metacity so this theme looks different than other themes.

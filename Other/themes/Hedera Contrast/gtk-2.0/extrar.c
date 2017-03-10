style "alldark"{
XfceTasklist::minimized-icon-lucency=0
XfceWindowMenuPlugin::minimized-icon-lucency = 0}
class "*" style "alldark"
widget "*" style "alldark"

style "xfcepanelwindow"{
fg[NORMAL]=@darktext
fg[PRELIGHT]=@darktext
fg[SELECTED]=@darktext
fg[ACTIVE]=@darktext
fg[INSENSITIVE]=@darkinactivetext
bg[NORMAL]=@darkbg
bg[PRELIGHT]=@darkbg
bg[SELECTED]=@darkbg
bg[ACTIVE]=@darkbg
bg[INSENSITIVE]=@darkbg
xthickness=0
ythickness=0}
widget_class "*PanelItemBar*" style "xfcepanelwindow"
widget_class "*XfcePanelWindow*" style "xfcepanelwindow"
widget_class "*XfcePanelWindow*PanelItemBar" style "xfcepanelwindow"
widget "*XfcePanelWindowWrapper" style "xfcepanelwindow"
widget_class "*XfcePanelPlugin*" style "xfcepanelwindow"
widget "*XfcePanelWindowHidden" style "xfcepanelwindow"

style"paneltask"{
fg[PRELIGHT]=@windowtext
fg[SELECTED]=@windowtext
fg[ACTIVE]=@windowtext
fg[INSENSITIVE]=@darkinactivetext}
widget_class "*XfceTasklist*" style "paneltask"

style "topmenuplugin"{
xthickness=0
ythickness=0
fg[NORMAL]=@darktext
fg[SELECTED]=@windowtext
fg[PRELIGHT]=@windowtext
fg[ACTIVE]=@windowtext
fg[INSENSITIVE]=@darkinactivetext
bg[NORMAL]=@darkbg
bg[PRELIGHT]=@hilight}
widget "*TopMenu*" style "topmenuplugin"

style "lxpanelwindow"{
fg[NORMAL]=@darktext
fg[PRELIGHT]=@darktext
fg[SELECTED]=@darktext
fg[ACTIVE]=@darktext
fg[INSENSITIVE]=@darkinactivetext
bg[NORMAL]=@darkbg
bg[PRELIGHT]=@darkbg
bg[ACTIVE]=@darkbg
bg[SELECTED]=@hilight
bg[INSENSITIVE]=@darkbg
xthickness=0
ythickness=0}
widget_class "PanelToplevel*" style "lxpanelwindow"

style"lxpaneltask"{
fg[PRELIGHT]=@windowtext
fg[SELECTED]=@windowtext
fg[ACTIVE]=@windowtext
fg[INSENSITIVE]=@darkinactivetext}
widget_class "PanelToplevel*TaskButton*" style "lxpaneltask"

widget_class "*GtkTrayIcon*"style "darkicons"
widget_class "*SystrayPlugin*"style "darkicons"
style "panelsettings"{
### Panel
# Time in miliseconds before the panel will unhide on an enter event
XfcePanelWindow::popup-delay = 350
# Time in miliseconds before the panel will hide on a leave event
XfcePanelWindow::popdown-delay = 600
# Size of autohide window in pixels
XfcePanelWindow::autohide-size = 1

### Taskbar/window buttons
# The maximum length of a button before the label ellipsizes.
# When this value is set to -1 the button will expand to the
# entire available space.
XfceTasklist::max-button-length = -1
# Ellipsizing used in the task list and overflow menu labels.
XfceTasklist::ellipsize-mode = PANGO_ELLIPSIZE_END
# Maximum number of characters in the menu label before it will
# be ellipsized.
XfceTasklist::menu-max-width-chars = 24
# Lucency of minimized icons. Valid values are between 0 (completely
# hide the icon) and 100 (don't lighten the icon).
XfceTasklist::minimized-icon-lucency=40
### Taskmenu/window menu
# Ellipsizing used in the menu label.
XfceWindowMenuPlugin::ellipsize-mode = PANGO_ELLIPSIZE_END
# Maximum number of characters in the menu label before it will be ellipsized.
XfceWindowMenuPlugin::max-width-chars = 24
# Lucency of minimized icons. Valid values are between 0 (completely
# hide the icon) and 100 (don't lighten the icon).
XfceWindowMenuPlugin::minimized-icon-lucency = 50
# Fix the panel images to a default gtk icon size
XfcePanelImage::force-gtk-icon-sizes=1
}
class "*" style "panelsettings"
widget "*" style "panelsettings"

style "xfcepanelwindow"{
xthickness=0
ythickness=0
GtkWidget::shadow-type=GTK_SHADOW_NONE
GtkButton::inner-border={2,2,2,2}
GtkButton::image-spacing=5
engine"pixmap"{
image{
function=BOX
file="img/trans.png"
stretch=FALSE}
image{
function=HANDLE
file="img/trans.png"
stretch=FALSE}
image{
function=SHADOW
shadow=OUT
file="img/trans.png"
border={1,1,0,1}
stretch=TRUE}}}
widget_class "*XfcePanelWindow*PanelItemBar" style "xfcepanelwindow"

style "xfcepanelboldfont"{
font_name="bold"}
widget_class "*XfcePanelWindow*ClockPlugin*" style "xfcepanelboldfont"
widget_class "*XfceTasklist*" style "xfcepanelboldfont"
widget_class "*XfceApplicationsMenu*" style "xfcepanelboldfont"
widget "*whiskermenu-button*" style "xfcepanelboldfont"

style"panelbutton"{
xthickness=0
ythickness=0
GtkButton::inner-border={2,2,2,2}
GtkButton::shadow-type=GTK_SHADOW_NONE
GtkWidget::wide-separators=1
GtkWidget::separator-height=0
GtkWidget::separator-width=0
engine"pixmap"{
image{
function=BOX
state=INSENSITIVE
shadow=OUT
file="img/trans.png"
stretch=FALSE}
image{
function=BOX
state=NORMAL
file="img/trans.png"
stretch=FALSE}
image{
function=BOX
state=PRELIGHT
shadow=OUT
file="img/trans.png"
stretch=FALSE}
image{
function=BOX
state=PRELIGHT
shadow=IN
file="img/trans.png"
stretch=FALSE}
image{
function=BOX
state=INSENSITIVE
shadow=IN
file="img/trans.png"
stretch=FALSE}
image{
function=BOX
state=SELECTED
file="img/trans.png"
stretch=FALSE}
image{
function=BOX
state=ACTIVE
file="img/trans.png"
stretch=FALSE}
image{
detail="buttondefault"
file="img/trans.png"
stretch=FALSE}
image{
detail="focus"
file="img/trans.png"
stretch=FALSE}}}
widget_class"*XfcePanelWindow*Button"style"panelbutton"
widget_class"*ActionsPlugin*"style"panelbutton"
widget"*XfceApplicationsMenu*"style"panelbutton"
widget "*whiskermenu-button*" style "panelbutton"
widget "*xfce-panel-toggle-button*" style "panelbutton"

style"paneltask"{
xthickness=3
ythickness=3
GtkButton::inner-border={2,2,2,2}
GtkButton::shadow-type=GTK_SHADOW_NONE
GtkWidget::wide-separators=1
GtkWidget::separator-height=0
GtkWidget::separator-width=0
engine"pixmap"{
image{
function=BOX
state=INSENSITIVE
shadow=OUT
file="img/trans.png"
stretch=FALSE}
image{
function=BOX
state=NORMAL
file="img/trans.png"
stretch=FALSE}
image{
function=BOX
state=PRELIGHT
shadow=OUT
file="img/xfce-panel-task-hover.svg"
stretch=FALSE}
image{
function=BOX
state=PRELIGHT
shadow=IN
file="img/xfce-panel-task-hover.svg"
stretch=FALSE}
image{
function=BOX
state=INSENSITIVE
shadow=IN
file="img/trans.png"
stretch=FALSE}
image{
function=BOX
state=SELECTED
file="img/xfce-panel-task.svg"
stretch=FALSE}
image{
function=BOX
state=ACTIVE
file="img/xfce-panel-task.svg"
stretch=FALSE}
image{
detail="buttondefault"
file="img/trans.png"
stretch=FALSE}
image{
detail="focus"
file="img/trans.png"
stretch=FALSE}}}
widget_class "*XfceTasklist*" style "paneltask"
style"panelextra"{
xthickness=0
ythickness=0
GtkButton::inner-border={2,2,2,2}
GtkButton::shadow-type=GTK_SHADOW_NONE
GtkWidget::wide-separators=1
GtkWidget::separator-height=0
GtkWidget::separator-width=0
engine"pixmap"{
image{
function=BOX
state=INSENSITIVE
shadow=OUT
file="img/trans.png"
stretch=FALSE}
image{
function=BOX
state=NORMAL
file="img/trans.png"
stretch=FALSE}
image{
function=BOX
state=PRELIGHT
shadow=OUT
file="img/trans.png"
stretch=FALSE}
image{
function=BOX
state=PRELIGHT
shadow=IN
file="img/trans.png"
stretch=FALSE}
image{
function=BOX
state=INSENSITIVE
shadow=IN
file="img/trans.png"
stretch=FALSE}
image{
function=BOX
state=SELECTED
file="img/xfce-panel-task.svg"
stretch=FALSE}
image{
function=BOX
state=ACTIVE
file="img/xfce-panel-task.svg"
stretch=FALSE}
image{
detail="buttondefault"
file="img/trans.png"
stretch=FALSE}
image{
detail="focus"
file="img/trans.png"
stretch=FALSE}}}
widget_class "*XfcePanelWindow*ClockPlugin*" style "panelextra"
widget_class "*XfceApplicationsMenu*" style "panelextra"
widget "*whiskermenu-button*" style "panelextra"

widget"*XfcePanelWindow*Arrow*"style"gtkarrow"
widget"*XfcePanelWindow*GtkHSeparator*"style"seperatornone"
widget"*XfcePanelWindow*GtkVSeparator*"style"seperatornone"




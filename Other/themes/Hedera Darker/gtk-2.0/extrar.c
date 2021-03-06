style"darkmenubar"{
font_name="bold"
bg[NORMAL]=@darkbg
bg[PRELIGHT]=@hilight
bg[SELECTED]=@hilight
bg[ACTIVE]=@hilight
bg[INSENSITIVE]=@darkbg
fg[NORMAL]=@darktext
fg[PRELIGHT]=@windowtext
fg[SELECTED]=@windowtext
fg[ACTIVE]=@windowtext
fg[INSENSITIVE]=@darkinactivetext}
widget_class"*GtkMenuBar*"style"darkmenubar"

style"alldark"{
ChromeGtkFrame::frame-color=@darkbg
ChromeGtkFrame::inactive-frame-color=@darkbg
ChromeGtkFrame::frame-gradient-size=0
ChromeGtkFrame::frame-gradient-color=@darkbg}
widget_class "*" style "alldark"

style "darkdialog"{
bg[NORMAL]=@darkbg
bg[PRELIGHT]=@darkbg
bg[SELECTED]=@darkbg
bg[ACTIVE]=@darkbg
bg[INSENSITIVE]=@darkbg
fg[NORMAL]=@darktext
fg[PRELIGHT]=@darktext
fg[SELECTED]=@darktext
fg[ACTIVE]=@darktext
fg[INSENSITIVE]=@darkinactivetext
xthickness=0
ythickness=0
GtkWidget::shadow-type=GTK_SHADOW_NONE}
widget_class "*ThunarProgressDialog*" style "darkdialog"
widget_class "*GtkMessageDialog*" style "darkdialog"

style "darkbutton"{
bg[NORMAL]=@darkbg
bg[PRELIGHT]=@darkbg
bg[SELECTED]=@darkbg
bg[ACTIVE]=@darkbg
bg[INSENSITIVE]=@darkbg
fg[NORMAL]=@darktext
fg[PRELIGHT]=@darktext
fg[SELECTED]=@windowtext
fg[ACTIVE]=@windowtext
fg[INSENSITIVE]=@darkinactivetext
xthickness=3
ythickness=3
GtkButton::default-outside-border={2,2,2,2}
GtkButton::default-border={2,2,2,2}
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
file="theme/img/trans.png"
stretch=FALSE}
image{
function=BOX
state=NORMAL
file="theme/img/trans.png"
stretch=FALSE}
image{
function=BOX
state=PRELIGHT
shadow=OUT
file="theme/img/toolbutton-hover.png"
border={2,2,2,2}
stretch=TRUE}
image{
function=BOX
state=PRELIGHT
shadow=IN
file="theme/img/toolbutton-active-hover.png"
border={2,2,2,2}
stretch=TRUE}
image{
function=BOX
state=INSENSITIVE
shadow=IN
file="theme/img/dark_toolbutton-active.png"
border={2,2,2,2}
stretch=TRUE}
image{
function=BOX
state=SELECTED
file="theme/img/toolbutton-active-hover.png"
border={2,2,2,2}
stretch=TRUE}
image{
function=BOX
state=ACTIVE
file="theme/img/toolbutton-active-hover.png"
border={2,2,2,2}
stretch=TRUE}
image{
detail="buttondefault"
file="theme/img/trans.png"
stretch=FALSE}
image{
detail="focus"
file="theme/img/trans.png"
stretch=FALSE}}}
widget_class "*ThunarProgressDialog*GtkButton*" style "darkbutton"
widget_class "*GtkMessageDialog*GtkButton*" style "darkbutton"

style"xfceheaders"{
fg[NORMAL]=@darktext
text[NORMAL]=@darktext
fg[INSENSITIVE]=@darktext
text[INSENSITIVE]=@darktext
base[NORMAL]=@darkbg
bg[NORMAL]=@darkbg}
class"*XfceHeading*"style"xfceheaders"

style"xfceheaders2" = "darkicons" {
xthickness=1
ythickness=1
fg[NORMAL]=@darktext
text[NORMAL]=@darktext
fg[INSENSITIVE]=@darktext
text[INSENSITIVE]=@darktext
base[NORMAL]=@darkbg
base[INSENSITIVE]=@darkbg
bg[NORMAL]=@darkbg
engine"pixmap"{
image{
function=SHADOW
shadow=IN
detail="entry"
state=NORMAL
file="theme/img/trans.png"
stretch=FALSE}}}
widget_class"*XfceSettingsManagerDialog*GtkEntry*"style"xfceheaders2"
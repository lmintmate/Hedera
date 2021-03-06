style"checkbox"
{
xthickness=0
ythickness=0
fg[NORMAL]=@inactivewindowtext
fg[PRELIGHT]=@inactivewindowtext
fg[SELECTED]=@inactivewindowtext
fg[ACTIVE]=@inactivewindowtext
fg[INSENSITIVE]=@inactivewindowtext
GtkCheckButton::indicator-size=17
GtkCheckButton::indicator-spacing=5
engine"pixmap"
{
image{
function=CHECK
state=INSENSITIVE
shadow=OUT
overlay_file="img/checkbox-insensitive.png"
overlay_stretch=FALSE}
image{
function=CHECK
state=NORMAL
shadow=OUT
overlay_file="img/checkbox.png"
overlay_stretch=FALSE}
image{
function=CHECK
state=PRELIGHT
shadow=OUT
overlay_file="img/checkbox-hover.png"
overlay_stretch=FALSE}
image{
function=CHECK
state=ACTIVE
shadow=OUT
overlay_file="img/checkbox-hover.png"
overlay_stretch=FALSE}
## breeze draws tristates as unchecked boxes
image{
function=CHECK
state=INSENSITIVE
shadow=ETCHED_IN
overlay_file="img/checkbox-insensitive.png"
overlay_stretch=FALSE}
image{
function=CHECK
state=NORMAL
shadow=ETCHED_IN
overlay_file="img/checkbox.png"
overlay_stretch=FALSE}
image{
function=CHECK
state=PRELIGHT
shadow=ETCHED_IN
overlay_file="img/checkbox-hover.png"
overlay_stretch=FALSE}
image{
function=CHECK
state=ACTIVE
shadow=ETCHED_IN
overlay_file="img/checkbox-hover.png"
overlay_stretch=FALSE}
image{
function=CHECK
state=INSENSITIVE
shadow=ETCHED_OUT
overlay_file="img/checkbox-insensitive.png"
overlay_stretch=FALSE}
image{
function=CHECK
state=NORMAL
shadow=ETCHED_OUT
overlay_file="img/checkbox.png"
overlay_stretch=FALSE}
image{
function=CHECK
state=PRELIGHT
shadow=ETCHED_OUT
overlay_file="img/checkbox-hover.png"
overlay_stretch=FALSE}
image{
function=CHECK
state=ACTIVE
shadow=ETCHED_OUT
overlay_file="img/checkbox-hover.png"
overlay_stretch=FALSE}
image{
function=CHECK
state=INSENSITIVE
shadow=IN
overlay_file="img/checkbox-checked-insensitive.png"
overlay_stretch=FALSE}
image{
function=CHECK
state=NORMAL
shadow=IN
overlay_file="img/checkbox-checked.png"
overlay_stretch=FALSE}
image{
function=CHECK
state=PRELIGHT
shadow=IN
overlay_file="img/checkbox-checked.png"
overlay_stretch=FALSE}
image{
function=CHECK
state=ACTIVE
shadow=IN
overlay_file="img/checkbox-checked.png"
overlay_stretch=FALSE}}}
class"GtkCheckButton"style"checkbox"

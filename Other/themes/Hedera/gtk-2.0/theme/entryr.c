style"gtkentry"{
xthickness=1
ythickness=1
GtkWidget::focus-line-width=0
GtkWidget::focus-padding=0
GtkWidget::interior-focus=0
GtkEntry::inner-border={5,5,5,5}
GtkEntry::state-hint=0
base[INSENSITIVE]="#dddddd"
base[SELECTED]=@hilight2
engine"pixmap"{
image{
function=SHADOW
shadow=IN
detail="entry"
state=NORMAL
file="img/entry.png"
border={2,2,2,2}
stretch=TRUE}
image{
function=SHADOW
shadow=IN
detail="entry"
state=ACTIVE
file="img/entry.png"
border={2,2,2,2}
stretch=TRUE}
image{
function=SHADOW
shadow=IN
detail="entry"
state=SELECTED
file="img/entry.png"
border={2,2,2,2}
stretch=TRUE}
image{
function=SHADOW
shadow=IN
detail="entry"
state=INSENSITIVE
file="img/entry.png"
border={2,2,2,2}
stretch=TRUE}
image{
function=SHADOW
shadow=IN
state=PRELIGHT
detail="entry"
file="img/entry-focus.png"
border={2,2,2,2}
stretch=TRUE}
image{
function=FOCUS
detail="entry"
file="img/entry-focus.png"
border={2,2,2,2}
stretch=TRUE}}}
class"*GtkEntry"style"gtkentry"

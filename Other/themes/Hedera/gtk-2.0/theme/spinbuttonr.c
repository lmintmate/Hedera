style"gtkspinbutton"{
xthickness=4
ythickness=2
GtkSpinButton::shadow-type=GTK_SHADOW_NONE
bg[NORMAL]=@basebg
base[INSENSITIVE]=@basebg
engine"pixmap"{
image
{
function=ARROW
}
image
{
function=BOX
detail="spinbutton_up"
file="img/spinbutton-up.png"
state=INSENSITIVE
stretch=TRUE
border={0,2,2,0}
overlay_file="img/spin_up.png"
overlay_stretch=FALSE
}
image
{
function=BOX
detail="spinbutton_down"
state=INSENSITIVE
file="img/spinbutton-down.png"
stretch=TRUE
border={0,2,0,2}
overlay_file="img/spin_down.png"
overlay_stretch=FALSE
}
image
{
function=BOX
detail="spinbutton_up"
state=NORMAL
file="img/spinbutton-up.png"
stretch=TRUE
border={0,2,2,0}
overlay_file="img/spin_up.png"
overlay_stretch=FALSE
}
image
{
function=BOX
detail="spinbutton_down"
state=NORMAL
file="img/spinbutton-down.png"
stretch=TRUE
border={0,2,0,2}
overlay_file="img/spin_down.png"
overlay_stretch=FALSE
}
image
{
function=BOX
detail="spinbutton_up"
state=PRELIGHT
file="img/spinbutton-up.png"
stretch=TRUE
border={0,2,2,0}
overlay_file="img/spin_up.png"
overlay_stretch=FALSE
}
image
{
function=BOX
detail="spinbutton_down"
state=PRELIGHT
file="img/spinbutton-down.png"
stretch=TRUE
border={0,2,0,2}
overlay_file="img/spin_down.png"
overlay_stretch=FALSE
}
image
{
function=BOX
detail="spinbutton_up"
state=SELECTED
file="img/spinbutton-up.png"
stretch=TRUE
border={0,2,2,0}
overlay_file="img/spin_up.png"
overlay_stretch=FALSE
}
image
{
function=BOX
detail="spinbutton_down"
state=SELECTED
file="img/spinbutton-down.png"
stretch=TRUE
border={0,2,0,2}
overlay_file="img/spin_down.png"
overlay_stretch=FALSE
}
image
{
function=BOX
detail="spinbutton_up"
state=ACTIVE
file="img/spinbutton-up.png"
stretch=TRUE
border={0,2,2,0}
overlay_file="img/spin_up.png"
overlay_stretch=FALSE
}
image
{
function=BOX
detail="spinbutton_down"
state=ACTIVE
file="img/spinbutton-down.png"
stretch=TRUE
border={0,2,0,2}
overlay_file="img/spin_down.png"
overlay_stretch=FALSE
}
}}
class"GtkSpinButton"style"gtkspinbutton"
widget_class"*GtkSpinButton"style"gtkspinbutton"

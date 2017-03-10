style"menuitem"{
xthickness=0
ythickness=5
bg[NORMAL]=@window
bg[PRELIGHT]=@hilight
bg[SELECTED]=@hilight
bg[ACTIVE]=@hilight
bg[INSENSITIVE]=@window
engine"murrine"{
focusstyle=0
contrast=0.0
glazestyle=0
highlight_shade=0.0
roundness=0
border_shades={1.0,1.0}
trough_shades={1.0,1.0}
reliefstyle=0
gradient_shades={1.0,1.0,1.0,1.0}
lightborder_shade=0.0
shadow_shades={ 0.0, 0.0 }
border_colors={@hilight,@hilight}
gradient_colors={@hilight,@hilight,@hilight,@hilight}
}}class"GtkMenuItem"style"menuitem"

style"linemenuitem"{
xthickness=1
ythickness=1
GtkWidget::wide-separators=1
GtkWidget::separator-height=1
engine"pixmap"{
image{
function=BOX
file="img/separator.png"}
}}widget_class"*GtkSeparatorMenuItem"style"linemenuitem"
widget_class"*GtkTearoffMenuItem"style"linemenuitem"

style"menuitemarrow"{
engine"pixmap"{
image
{
function=ARROW
state=INSENSITIVE
overlay_file="img/arrow_up-insensitive.svg"
overlay_stretch=FALSE
arrow_direction=UP
}
image
{
function=ARROW
state=INSENSITIVE
overlay_file="img/arrow_down-insensitive.svg"
overlay_stretch=FALSE
arrow_direction=DOWN
}
image
{
function=ARROW
state=INSENSITIVE
overlay_file="img/arrow_left-insensitive.svg"
overlay_stretch=FALSE
arrow_direction=LEFT
}
image
{
function=ARROW
state=INSENSITIVE
overlay_file="img/arrow_right-insensitive.svg"
overlay_stretch=FALSE
arrow_direction=RIGHT
}
image
{
function=ARROW
state=NORMAL
overlay_file="img/arrow_up.svg"
overlay_stretch=FALSE
arrow_direction=UP
}
image
{
function=ARROW
state=NORMAL
overlay_file="img/arrow_down.svg"
overlay_stretch=FALSE
arrow_direction=DOWN
}
image
{
function=ARROW
state=NORMAL
overlay_file="img/arrow_left.svg"
overlay_stretch=FALSE
arrow_direction=LEFT
}
image
{
function=ARROW
state=NORMAL
overlay_file="img/arrow_right.svg"
overlay_stretch=FALSE
arrow_direction=RIGHT
}
image
{
function=ARROW
state=ACTIVE
overlay_file="img/arrow_up.svg"
overlay_stretch=FALSE
arrow_direction=UP
}
image
{
function=ARROW
state=ACTIVE
overlay_file="img/arrow_down.svg"
overlay_stretch=FALSE
arrow_direction=DOWN
}
image
{
function=ARROW
state=ACTIVE
overlay_file="img/arrow_left.svg"
overlay_stretch=FALSE
arrow_direction=LEFT
}
image
{
function=ARROW
state=ACTIVE
overlay_file="img/arrow_right.svg"
overlay_stretch=FALSE
arrow_direction=RIGHT
}
image
{
function=ARROW
state=PRELIGHT
overlay_file="img/arrow_up.svg"
overlay_stretch=FALSE
arrow_direction=UP
}
image
{
function=ARROW
state=PRELIGHT
overlay_file="img/arrow_down.svg"
overlay_stretch=FALSE
arrow_direction=DOWN
}
image
{
function=ARROW
state=PRELIGHT
overlay_file="img/arrow_left.svg"
overlay_stretch=FALSE
arrow_direction=LEFT
}
image
{
function=ARROW
state=PRELIGHT
overlay_file="img/arrow_right.svg"
overlay_stretch=FALSE
arrow_direction=RIGHT
}
image
{
function=ARROW
state=INSENSITIVE
overlay_file="img/arrow_up-insensitive.svg"
overlay_stretch=FALSE
arrow_direction=UP
}
image
{
function=ARROW
state=INSENSITIVE
overlay_file="img/arrow_down-insensitive.svg"
overlay_stretch=FALSE
arrow_direction=DOWN
}
image
{
function=ARROW
state=INSENSITIVE
overlay_file="img/arrow_left-insensitive.svg"
overlay_stretch=FALSE
arrow_direction=LEFT
}
image
{
function=ARROW
state=INSENSITIVE
overlay_file="img/arrow_right-insensitive.svg"
overlay_stretch=FALSE
arrow_direction=RIGHT
}
image
{
function=ARROW
state=NORMAL
overlay_file="img/arrow_up.svg"
overlay_stretch=FALSE
arrow_direction=UP
}
image
{
function=ARROW
state=NORMAL
overlay_file="img/arrow_down.svg"
overlay_stretch=FALSE
arrow_direction=DOWN
}
image
{
function=ARROW
state=NORMAL
overlay_file="img/arrow_left.svg"
overlay_stretch=FALSE
arrow_direction=LEFT
}
image
{
function=ARROW
state=NORMAL
overlay_file="img/arrow_right.svg"
overlay_stretch=FALSE
arrow_direction=RIGHT
}
image
{
function=ARROW
state=ACTIVE
overlay_file="img/arrow_up.svg"
overlay_stretch=FALSE
arrow_direction=UP
}
image
{
function=ARROW
state=ACTIVE
overlay_file="img/arrow_down.svg"
overlay_stretch=FALSE
arrow_direction=DOWN
}
image
{
function=ARROW
state=ACTIVE
overlay_file="img/arrow_left.svg"
overlay_stretch=FALSE
arrow_direction=LEFT
}
image
{
function=ARROW
state=ACTIVE
overlay_file="img/arrow_right.svg"
overlay_stretch=FALSE
arrow_direction=RIGHT
}
image
{
function=ARROW
state=PRELIGHT
overlay_file="img/arrow_up.svg"
overlay_stretch=FALSE
arrow_direction=UP
}
image
{
function=ARROW
state=PRELIGHT
overlay_file="img/arrow_down.svg"
overlay_stretch=FALSE
arrow_direction=DOWN
}
image
{
function=ARROW
state=PRELIGHT
overlay_file="img/arrow_left.svg"
overlay_stretch=FALSE
arrow_direction=LEFT
}
image
{
function=ARROW
state=PRELIGHT
overlay_file="img/arrow_right.svg"
overlay_stretch=FALSE
arrow_direction=RIGHT
}
image
{
function=ARROW
state=INSENSITIVE
detail="arrow"
overlay_file="img/arrow_up-insensitive.svg"
overlay_stretch=FALSE
arrow_direction=UP
}
image
{
function=ARROW
state=INSENSITIVE
detail="arrow"
overlay_file="img/arrow_down-insensitive.svg"
overlay_stretch=FALSE
arrow_direction=DOWN
}
image
{
function=ARROW
state=INSENSITIVE
detail="arrow"
overlay_file="img/arrow_left-insensitive.svg"
overlay_stretch=FALSE
arrow_direction=LEFT
}
image
{
function=ARROW
state=INSENSITIVE
detail="arrow"
overlay_file="img/arrow_right-insensitive.svg"
overlay_stretch=FALSE
arrow_direction=RIGHT
}
image
{
function=ARROW
state=NORMAL
detail="arrow"
overlay_file="img/arrow_up.svg"
overlay_stretch=FALSE
arrow_direction=UP
}
image
{
function=ARROW
state=NORMAL
detail="arrow"
overlay_file="img/arrow_down.svg"
overlay_stretch=FALSE
arrow_direction=DOWN
}
image
{
function=ARROW
state=NORMAL
detail="arrow"
overlay_file="img/arrow_left.svg"
overlay_stretch=FALSE
arrow_direction=LEFT
}
image
{
function=ARROW
state=NORMAL
detail="arrow"
overlay_file="img/arrow_right.svg"
overlay_stretch=FALSE
arrow_direction=RIGHT
}
image
{
function=ARROW
state=ACTIVE
detail="arrow"
overlay_file="img/arrow_up.svg"
overlay_stretch=FALSE
arrow_direction=UP
}
image
{
function=ARROW
state=ACTIVE
detail="arrow"
overlay_file="img/arrow_down.svg"
overlay_stretch=FALSE
arrow_direction=DOWN
}
image
{
function=ARROW
state=ACTIVE
detail="arrow"
overlay_file="img/arrow_left.svg"
overlay_stretch=FALSE
arrow_direction=LEFT
}
image
{
function=ARROW
state=ACTIVE
detail="arrow"
overlay_file="img/arrow_right.svg"
overlay_stretch=FALSE
arrow_direction=RIGHT
}
image
{
function=ARROW
state=PRELIGHT
detail="arrow"
overlay_file="img/arrow_up.svg"
overlay_stretch=FALSE
arrow_direction=UP
}
image
{
function=ARROW
state=PRELIGHT
detail="arrow"
overlay_file="img/arrow_down.svg"
overlay_stretch=FALSE
arrow_direction=DOWN
}
image
{
function=ARROW
state=PRELIGHT
detail="arrow"
overlay_file="img/arrow_left.svg"
overlay_stretch=FALSE
arrow_direction=LEFT
}
image
{
function=ARROW
state=PRELIGHT
overlay_file="img/arrow_right.svg"
overlay_stretch=FALSE
arrow_direction=RIGHT
}
image
{
function=ARROW
state=INSENSITIVE
detail="arrow"
overlay_file="img/arrow_up-insensitive.svg"
overlay_stretch=FALSE
arrow_direction=UP
}
image
{
function=ARROW
state=INSENSITIVE
detail="arrow"
overlay_file="img/arrow_down-insensitive.svg"
overlay_stretch=FALSE
arrow_direction=DOWN
}
image
{
function=ARROW
state=INSENSITIVE
detail="arrow"
overlay_file="img/arrow_left-insensitive.svg"
overlay_stretch=FALSE
arrow_direction=LEFT
}
image
{
function=ARROW
state=INSENSITIVE
detail="arrow"
overlay_file="img/arrow_right-insensitive.svg"
overlay_stretch=FALSE
arrow_direction=RIGHT
}
image
{
function=ARROW
state=NORMAL
detail="arrow"
overlay_file="img/arrow_up.svg"
overlay_stretch=FALSE
arrow_direction=UP
}
image
{
function=ARROW
state=NORMAL
detail="arrow"
overlay_file="img/arrow_down.svg"
overlay_stretch=FALSE
arrow_direction=DOWN
}
image
{
function=ARROW
state=NORMAL
detail="arrow"
overlay_file="img/arrow_left.svg"
overlay_stretch=FALSE
arrow_direction=LEFT
}
image
{
function=ARROW
state=NORMAL
detail="arrow"
overlay_file="img/arrow_right.svg"
overlay_stretch=FALSE
arrow_direction=RIGHT
}
image
{
function=ARROW
state=ACTIVE
detail="arrow"
overlay_file="img/arrow_up.svg"
overlay_stretch=FALSE
arrow_direction=UP
}
image
{
function=ARROW
state=ACTIVE
detail="arrow"
overlay_file="img/arrow_down.svg"
overlay_stretch=FALSE
arrow_direction=DOWN
}
image
{
function=ARROW
state=ACTIVE
detail="arrow"
overlay_file="img/arrow_left.svg"
overlay_stretch=FALSE
arrow_direction=LEFT
}
image
{
function=ARROW
state=ACTIVE
detail="arrow"
overlay_file="img/arrow_right.svg"
overlay_stretch=FALSE
arrow_direction=RIGHT
}
image
{
function=ARROW
state=PRELIGHT
detail="arrow"
overlay_file="img/arrow_up.svg"
overlay_stretch=FALSE
arrow_direction=UP
}
image
{
function=ARROW
state=PRELIGHT
detail="arrow"
overlay_file="img/arrow_down.svg"
overlay_stretch=FALSE
arrow_direction=DOWN
}
image
{
function=ARROW
state=PRELIGHT
detail="arrow"
overlay_file="img/arrow_left.svg"
overlay_stretch=FALSE
arrow_direction=LEFT
}
image
{
function=ARROW
state=PRELIGHT
detail="arrow"
overlay_file="img/arrow_right.svg"
overlay_stretch=FALSE
arrow_direction=RIGHT
}}}
widget_class"*GtkMenu*GtkImage*"style"menuitemarrow"
widget_class"*GtkMenuItem"style"menuitemarrow"

style"checkmenuitem"{
xthickness=0
ythickness=0
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
overlay_file="img/checkbox-menu-hover.png"
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
overlay_file="img/checkbox.png"
overlay_stretch=FALSE}
image{
function=CHECK
state=ACTIVE
shadow=ETCHED_IN
overlay_file="img/checkbox.png"
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
overlay_file="img/checkbox.png"
overlay_stretch=FALSE}
image{
function=CHECK
state=ACTIVE
shadow=ETCHED_OUT
overlay_file="img/checkbox.png"
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
overlay_file="img/checkbox-hover-checked.png"
overlay_stretch=FALSE}
image{
function=CHECK
state=ACTIVE
shadow=IN
overlay_file="img/checkbox-checked.png"
overlay_stretch=FALSE}
image{
function=OPTION
state=INSENSITIVE
shadow=OUT
overlay_file="img/radiobox-insensitive.png"
overlay_stretch=FALSE}
image{
function=OPTION
state=NORMAL
shadow=OUT
overlay_file="img/radiobox.png"
overlay_stretch=FALSE}
image{
function=OPTION
state=PRELIGHT
shadow=OUT
overlay_file="img/radiobox-menu-hover.png"
overlay_stretch=FALSE}
image{
function=OPTION
state=ACTIVE
shadow=OUT
overlay_file="img/radiobox.png"
overlay_stretch=FALSE}
## breeze draws tristates as unchecked boxes
image{
function=OPTION
state=INSENSITIVE
shadow=ETCHED_IN
overlay_file="img/radiobox-insensitive.png"
overlay_stretch=FALSE}
image{
function=OPTION
state=NORMAL
shadow=ETCHED_IN
overlay_file="img/radiobox.png"
overlay_stretch=FALSE}
image{
function=OPTION
state=PRELIGHT
shadow=ETCHED_IN
overlay_file="img/radiobox.png"
overlay_stretch=FALSE}
image{
function=OPTION
state=ACTIVE
shadow=ETCHED_IN
overlay_file="img/radiobox.png"
overlay_stretch=FALSE}
image{
function=OPTION
state=INSENSITIVE
shadow=ETCHED_OUT
overlay_file="img/radiobox-insensitive.png"
overlay_stretch=FALSE}
image{
function=OPTION
state=NORMAL
shadow=ETCHED_OUT
overlay_file="img/radiobox.png"
overlay_stretch=FALSE}
image{
function=OPTION
state=PRELIGHT
shadow=ETCHED_OUT
overlay_file="img/radiobox.png"
overlay_stretch=FALSE}
image{
function=OPTION
state=ACTIVE
shadow=ETCHED_OUT
overlay_file="img/radiobox.png"
overlay_stretch=FALSE}
image{
function=OPTION
state=INSENSITIVE
shadow=IN
overlay_file="img/radiobox-checked-insensitive.png"
overlay_stretch=FALSE}
image{
function=OPTION
state=NORMAL
shadow=IN
overlay_file="img/radiobox-checked.png"
overlay_stretch=FALSE}
image{
function=OPTION
state=PRELIGHT
shadow=IN
overlay_file="img/radiobox-hover-checked.png"
overlay_stretch=FALSE}
image{
function=OPTION
state=ACTIVE
shadow=IN
overlay_file="img/radiobox-hover-checked.png"
overlay_stretch=FALSE}}}
class"GtkCheckMenuItem"style"checkmenuitem"

style"menubarmenuitem"{
xthickness=5
ythickness=5}
widget_class"*GtkMenuBar*GtkMenuItem*"style"menubarmenuitem"
widget_class"*GtkMenuBar*GtkImageMenuItem*"style"menubarmenuitem"

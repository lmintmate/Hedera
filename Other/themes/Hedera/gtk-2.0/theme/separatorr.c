style"seperator"{
xthickness=1
ythickness=1
engine"pixmap"{
image{
function=BOX
file="img/separator.png"}}}
widget"*GtkHSeparator"style"seperator"
widget"*GtkVSeparator"style"seperator"

style"seperatornone"{
xthickness=5
ythickness=5
engine"pixmap"{
image{
function=BOX
file="img/trans.png"}}}
widget"*Button*GtkVSeparator"style"seperatornone"
widget_class"*<GtkToolbar>*GtkSeparatorToolItem"style"seperatornone"


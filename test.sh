dialog --colors --title "Welcome to Unix" --yesno "\ZB\Z3  Do you want to delete 123.txt ?" 20 60
s=$?
case $s in
0) rm 123.txt; echo "File 123.txt has been deleted !!";;
1)echo "File not deleted !! ";;
255) echo "You escaped on pressing [ESC] key";;
esac

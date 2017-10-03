clear
echo "enter the numbers :"
for ((i=0;i<8;i++))
do
 read a[$i]
done
for ((i=0;i<8;i++))
do
 for ((j=$i;j<8;j++))
  do
   if [ ${a[$j]} -gt ${a[$i]} ];
    then
    temp=${a[$j]}
    a[$j]=${a[$i]}
    a[$i]=$temp
   fi
  done
done
echo "the sorted elements are:"
 for((i=0;i<8;i++))
 do
  echo ${a[$i]}
 done
echo "max number is ${a[0]}"
echo "min number is ${a[7]}"

read x
res=1
for (( i=1;i<=x;i++ ))
do
res=`expr $res \* $i`
done
echo "$res"


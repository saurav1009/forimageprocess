echo "enter a string"
read input
reverse=""
len=${#input}
for (( j=$len-1;j>=0;j-- ))
do
reverse="$reverse${input:$j:1}"
done
echo "$reverse"

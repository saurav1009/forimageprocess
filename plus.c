#include<stdio.h>
void main()
{
	int a=5,i;
	i = ++a + ++a + a++;
	i = a++ + ++a + ++a;
	a = ++a + ++a + a++;
	printf("%d",a);
	printf("%d",i);
}

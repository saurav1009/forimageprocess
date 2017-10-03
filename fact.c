#include<stdio.h>
int fact(int x)
{
	int f=1,i;
	for(i=1;i<=x;i++)
	{
		f = f * i;
	}
	return(f);
}
void main()
{
	int n;
	printf("enter the number :\n");
	scanf("%d",&n);
	printf("the factorial of %d is %d\n",n,fact(n));
}

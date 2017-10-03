#include<stdio.h>
int main()
{
	int a[10],i,result,temp,n;
	printf("Enter the number of elements:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	result=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i] > result)
		{
			temp = a[i];
			a[i] = result;
			result = temp;
		}
	}
	printf("The maximum number is : %d",result);
}


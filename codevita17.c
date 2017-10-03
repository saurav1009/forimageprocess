#include<stdio.h>
int main()
{
	int n,a[1000],i,count = 0,temp,j,k;
	printf("\nenter the number of natural numbers:\n");
	scanf("%d",&n);
	printf("\nthe %d number of natural numbers are :\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<=n;j++)
	{
		for(i=1;i<n-1;i++)
		{
			temp = a[i];
			a[i] = a[i+1];
			a[i+1] = temp;
			for(k=0;k<n;k++)
			{
				printf("%d",a[i]);
				printf("\n");
			}
		}
	}
	return 0;
}

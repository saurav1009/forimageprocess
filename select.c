#include<stdio.h>
int select(int n,int arr[])
{
	int temp,j,k,i;
	for(i=0;i<n;i++)
	{
		j = i;
		for(k = i+1; k < n;k++)
		{
			if(arr[k] < arr[j])
			{
				temp = arr[j];
				arr[j] = arr[k];
				arr[k] = temp;
			}
		}
	}
	printf("the sorted elements are : \n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
void main()
{
	int a[50],i,n;
	printf("enter the number of integers:\n");
	scanf("%d",&n);
	printf("enter the %d integers",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	select(int n,int a[]);
}

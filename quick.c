#include<stdio.h>
void quick(int arr[100], int first, int last)
{
	int i,j,temp,pivot;
	if(first<last)
	{
		pivot = first;
		i = first;
		j = last;
		while(i<j)
		{
			while(arr[i] <= arr[pivot] && i < last)
			{
				i++;
			}
			while(arr[j] > arr[pivot])
			{
				j--;
			}
			if(i<j)
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	temp = arr[j];
	arr[j] = arr[pivot];
	arr[pivot] = temp;
	quick(arr, first, j-1);
	quick(arr, j+1, last);
	}
}
int main()
{
	int n,i,arr[100]; 
	printf("ënter the number of integers:\n");
	scanf("%d", &n);
	printf("the %d integers are:\n", n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
	}
	quick(arr , 0 , n-1 );
	printf("order of sorted elements are :\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}

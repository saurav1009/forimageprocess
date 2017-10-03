#include<stdio.h>
#include<stdlib.h>
void quick(int arr[1000],int first, int last)
{
	int pivot,i,j,temp;
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
		temp = arr[pivot];
		arr[pivot] = arr[j];
		arr[j] = temp;
		quick(arr,first,j-1);
		quick(arr,j+1,last);

	}
}
void printArray(int arr[1000] , int arr_size)
{
	int i;
	for(i = 0; i < arr_size; i++)
	{
		printf("%d",arr[i]);
		printf(" ");
	}
}
int main()
{
	int arr[1000],  arr_size = 1000,i;
	for( i = 0; i < arr_size; i++)
	{
		arr[i] = rand () % 900 + 100;
	}
	printf("enter the unsorted array : \n");
	printArray(arr,arr_size);
	quick(arr,0,arr_size-1);
	printf("the sorted array is as follows :\n");
	printArray(arr,arr_size);
	return 0;
}

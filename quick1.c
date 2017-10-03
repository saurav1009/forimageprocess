#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void quick(int arr[],int first,int last)
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
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	temp = arr[pivot];
	arr[pivot] = arr[j];
	arr[j] = temp;
	quick(arr,first,j-1);
	quick(arr,j+1,last);
	}
}
void merge(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;
	int L[n1], R[n2];
	for (i = 0; i < n1; i++)
	L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
	R[j] = arr[m + 1+ j]; i = 0;
	j = 0;
	k = l;
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}
	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}
void mergeSort(int arr[], int l, int r)
{
	if (l < r)
	{
		int m = l+(r-l)/2;
		mergeSort(arr, l, m);
		mergeSort(arr, m+1, r);
		merge(arr, l, m, r);
	}
}
void printArray(int arr[100000], int arr_size)
{
	int i;
	for(i=0;i<arr_size;i++)
	{
		printf("%d",arr[i]);
		printf(" ");
	}
}
int main()
{
	int i,arr[100000],arr_size=100000;
	for(i=0;i<100000;i++)
	{
		arr[i] = rand() % 10 + 1;
	}
	printf("The given array is: \n");
	printArray(arr,arr_size);
	clock_t begin = clock();
	quick(arr,0,arr_size-1);
	clock_t end = clock();
	double time_spent = (double) (end-begin)/CLOCKS_PER_SEC;
	printf("the sorted sequence by quicksort is:\n");
	printArray(arr,arr_size);
	clock_t start = clock();
	mergeSort(arr, 0, arr_size - 1);
	clock_t stop = clock();
	double time_spent1 = (double) (stop - start)/CLOCKS_PER_SEC; 
	printf("the sorted sequence by merge sort is:\n");
	printArray(arr,arr_size);
	printf("time spent to sort by quick sort is : %f\n", time_spent);
	printf("time spent to sort by merge sort is : %f\n", time_spent1);
	return 0;
}

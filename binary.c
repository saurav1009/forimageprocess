#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void linear(int arr[],int first,int last)
{

	int i,count = 0,x;
	printf("Searching number for linear: \n");
	scanf("%d",&x);
	clock_t begin=clock();
	for(i=0;i<20000;i++)
	{
		count++;
		if(arr[i]==x)
		{
			printf("Found !!\n");
			printf("%d found at location %d \n",x,i+1);
			break;
		}
	}
	clock_t end=clock();
	double time_spent=(double)(end-begin)/CLOCKS_PER_SEC;
	if(arr[i]!=x)
	{
		printf("not found !\n");
	}
	printf("iterations for linear search : %d \n",count);
	printf("time taken form linear search : %f \n",time_spent);
}
void binary(int arr[],int first , int last)
{
	int middle,search,i,c=0;
	printf("Searching number for binary: \n");
	scanf("%d", &search);
	clock_t start=clock();
	first = 0;
	last = 19999;
	middle = (first+last)/2;
	while (first <= last)
	{
		c++;
		if (arr[middle] < search)
		{
			first = middle + 1;
		}
		else if (arr[middle] == search)
		{
			printf("Found !!\n");
			printf("%d found at location %d \n", search, middle+1);
			break;
		}
		else
		last = middle - 1;
		middle = (first + last)/2;
	}
	clock_t stop=clock();
	double time_spent1=(double)(stop-start)/CLOCKS_PER_SEC;
	if (first > last)
	{
		printf("Not found or array not sorted !\n");
	}
	printf("No of Iterations in binary search : %d \n",c);
	printf("time taken for binary search is : %f \n",time_spent1);
}


void printArray(int arr[20000],int arr_size)
{
	int i;
	for(i=0;i<20000;i++)
	{
		printf("%d",arr[i]);
		printf(" ");
	}
}
int main()
{
	int arr[20000],arr_size = 20000,i;
	for(i=0;i<20000;i++)
	{
		if(i<19980)
		{
			arr[i] = 4;
		}
		else
		{
			arr[i] = 6;
		}
	}
	printArray(arr,arr_size);
	linear(arr,0,20000);
	binary(arr,0,20000);
	return 0;
}

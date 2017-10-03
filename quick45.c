#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void quick(int arr[],int first,int last)
{
    int i,j,pivot,temp,count = 0;
    if(first < last)
    {
        pivot = first;
        i = first;
        j = last;
        while(i < j)
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
    R[j] = arr[m + 1+ j];
    i = 0;
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
void printArray(int arr[60000] , int arr_size)
{
    int i;
    for( i = 0; i < arr_size; i++)
    {
        printf("%d",arr[i]);
        printf(" ");
    }
}
int main()
{
    int arr[60000], arr_size = 60000,i;
    printf("the unsorted elements are :\n");
    for( i =0; i < 60000; i++)
    {
        arr[i] = rand () %100 +1;
    }
    printArray(arr,arr_size);
    clock_t begin = clock();
    quick(arr,0,arr_size - 1);
    clock_t end = clock();
    double time_spent = (double) (end-begin)/CLOCKS_PER_SEC;
    clock_t start = clock();
    mergeSort(arr, 0, arr_size - 1);
    clock_t stop = clock();
    double time_spent1 = (double)(stop-start)/CLOCKS_PER_SEC;
    printf("the sorted elements by merge sort are: \n");
    printArray(arr,arr_size);
    printf("time is :%f",time_spent1);
    printf("the sorted elemets by quick sort are : \n");
    printArray(arr,arr_size);
    printf("time is : %f",time_spent);
      printf("time is :%f",time_spent1);

 
    return 0;
}

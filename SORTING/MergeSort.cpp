#include<iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{
    int temp[end - start + 1];
    int i = start, j = mid + 1, k = 0;

    while (i <= mid && j <= end)
    {
        if (arr[i] < arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while (i <= mid)
        temp[k++] = arr[i++];

    while (j <= end)
        temp[k++] = arr[j++];

    // Copy back to original array
    for (int x = 0; x < k; x++)
        arr[start + x] = temp[x];
}

void mergeSort(int *ar , int start , int end)
{
    if(start >= end) return;

    int mid = ( start + end ) / 2 ;
    
    mergeSort(ar , start , mid );
    mergeSort(ar , mid + 1 , end );
    
    merge(ar ,start , mid , end);

   
}
int main()
{
    int a[7] = {32,4,3,38,42,1,7};
    int n1 = 7;

    mergeSort(a , 0 , n1 - 1);

     for(int i = 0; i < n1 ; i++ )
    {
        cout<< a[i]<<" " ;
    }
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int partation(int arr[] , int s ,int e)
{
    int pivot = arr[s];
    int count = 0;
    for (int  i = s +1 ; i <= e; i++)
    {
        if(arr[s] <= arr[i])  count++;
    }

    int pivotTndex = s + count ; 
    swap(arr[pivotTndex] , arr[s]);

    int i = s; int j = e;
    while (i < pivotTndex && j > pivotTndex)
    {
        while(arr[i]<=pivot) i++;
        while(arr[j] > pivot) j++;
    }
    if(i < pivotTndex && j > pivotTndex) swap(arr[i++] , arr[j--]);

    return pivotTndex;
}
void quickSort(int arr[] ,int s, int e ) 
{
    //base case
    if(s >= e) return ;

    int p =  partation(arr ,s , e);
    // Left
    quickSort(arr , s , p - 1);
    //Right
    quickSort(arr , p + 1, e );

}

int main()
{
    int x[] = {12,8,19,26,17,3,10};
    int n = 7;

    quickSort(x , 0 , n-1);
    
    for (int i = 0; i < n; i++)
        cout << x[i] << " ";

    return 0;
}
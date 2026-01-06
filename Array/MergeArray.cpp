#include<iostream>
using namespace std;

int merge(int arr1[],int arr2[] , int s1, int s2)
{
    int arr[s1+s2];
    int i=0 ,j=0 ,k = 0;

    while ( i < s1 && j < s2)
    {
        if (arr1[i] < arr2[j] ) arr[k++] = arr1[i++];
        
        else arr[k++] = arr2[j++];
    }
    while ( i < s1 ) arr[k++] = arr1[i++];

    while ( j < s2 ) arr[k++] = arr2[j++];

    for(int i = 0; i < s1+s2 ; i++ )
    {
        cout<< arr[i]<<" " ;
    }
}
int main()
{
    int a[5] = {1,5,7,8,9};
    int n1 = 5;
    int b[7] = {2,3,6,11,10,21,23};
    int n2 = 7;
    merge(a,b,n1,n2);
    return 0;
}
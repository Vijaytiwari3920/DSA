#include<iostream>
using namespace std;

class Solution 
{
public:

    void print(int arr[], int size)
    {
        cout<<endl;
        for (int i = 0; i < size ; i++)
        {
            cout<<arr[i]<<" ";
        }
    }

    void swapalternate(int arr[], int size)
    {
        for(int i = 0; i < (size-1) ; i = i + 2 )
        {
            swap(arr[i], arr[i+1]);
        }

    }
};
    int main() 
    {
        Solution sol;
        int arr1[] = {1,2,7,8,5};
        int size1 = 5;

        int arr2[] = {1,2,3,4,5,6};
        int size2 = 6;

        sol.swapalternate(arr1 , size1);
        sol.swapalternate(arr2 , size2);

        sol.print(arr1,size1);
        sol.print(arr2,size2);

        return 0;
    }
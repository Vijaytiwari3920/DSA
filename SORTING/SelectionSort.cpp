#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int selectionSort(vector<int>& arr ) {

        int count = arr.size();
        int i = 0 ; int j = 0;

        for ( i = 0; i < count - 1; i++)
        {
            int min = i;

            for ( j = i + 1;  j < count; j++)
            {
                if(arr[j] < arr[min])
                {
                    min = j;
                }                
            }
            swap(arr[min],arr[i]);
        }

        for (int k = 0; k < count; k++)
        {
            printf("%d ",arr[k]);
        }
        return 0;      
    }
};
int main()
{
    Solution sol;
    vector<int> x = {12,8,19,26,17,3,10};

    sol.selectionSort(x);

    return 0;
}
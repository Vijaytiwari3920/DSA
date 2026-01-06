#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int BubbleSort(vector<int>& arr ) {

        int count = arr.size();

        for ( int i = 1; i < count - 1; i++)
        {
            for (int j = 0;  j < count- i ; j++)
            {
                if(arr[j] > arr[j+1])
                {
                    swap(arr[j],arr[j+1]);
                }                
            }
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

    sol.BubbleSort(x);

    return 0;
}
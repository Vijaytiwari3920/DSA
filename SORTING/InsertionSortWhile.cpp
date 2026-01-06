#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void insertionSort(vector<int>& arr ) {
        int count = arr.size();
        int i = 0; int j = 0;

        for (int i = 0; i < count; i++)
        {
            int temp = arr[i];
            j = i-1;
            while(j>=0)
            {
                if(arr[j] > temp) arr[j+1] = arr[j];
                else break;
                j--;
            }
            arr[j+1] = temp;
        }
        for (int i = 0; i < count; i++)
        {
            cout<<arr[i]<<" ";
        }
        
    }
};
int main()
{
    Solution sol;
    vector<int> x = {12,8,19,26,17,3,10};

    sol.insertionSort(x);

    return 0;
}
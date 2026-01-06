#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int binarySearch(vector<int>& arr , int target) {
        int start = 0;
        int end = arr.size() - 1;
        
        while (start < end) {

            int mid = start + (end - start) / 2;
            if(arr[mid] == target)
            {
                cout<<mid<<endl;
                break;
            }
            else if (arr[mid] < target) {
                start = mid + 1;
            } else {
                end = mid;
            }
        }
        return -1;  
    }
};
int main()
{
    Solution sol;
    vector<int> x = {1,2,3,8,10};
    int y = 8;

    sol.binarySearch(x , y);

    return 0;
}
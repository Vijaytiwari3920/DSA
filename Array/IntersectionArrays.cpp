#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
       
       for(int i =0 ; i < nums1.size() ; i++ ){
        for(int j = 0 ; j < nums2.size() ; j++){
            if (nums1[i] == nums2[j]) {
                arr.push_back(nums1[i]);
                break;
            }
        }
       }
       for(int i = 0 ; i < arr.size() ; i++ ){
        printf("%d ",arr[i]);
       }
    }
};
int main() 
{
Solution sol;
    vector<int>  arr1 = {1,2,2,7,8,5};
    vector<int>  arr2 = {1,2,3,4,5,6};

        sol.intersection(arr1 , arr2);

        return 0;
    }
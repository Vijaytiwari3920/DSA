#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    // Only works if there's exactly ONE duplicate number
    int findDuplicate(vector<int>& nums) {
        int ans = 0;
        
        // XOR all numbers in the array
        for(int num : nums) {
            ans ^= num;
        }
        
        // XOR all numbers from 1 to n-1
        for(int i = 1; i < nums.size(); i++) {
            ans ^= i;
        }
        
        return ans;  // This will be the duplicate number
    }
};
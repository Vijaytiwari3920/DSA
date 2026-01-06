#include<iostream>
#include<vector>
using namespace std;

class yo
{
public:
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;
        int s1 = nums1.size(), s2 = nums2.size();
        vector<int> temp;  // Fixed: empty vector
        
        while (i < s1 && j < s2) {     
            if (nums1[i] < nums2[j]) {
                temp.push_back(nums1[i]);
                i++;
            }
            else {
                temp.push_back(nums2[j]);
                j++;
            }
        }
        
        while (i < s1) {
            temp.push_back(nums1[i]);
            i++;
        }
        
        while (j < s2) {
            temp.push_back(nums2[j]);
            j++;
        }
        
        int ts = temp.size();
        if (ts % 2 == 1) {
            return temp[ts / 2];
        }
        else {
            int mid1 = temp[ts / 2];
            int mid2 = temp[(ts / 2) - 1];
            return (mid1 + mid2) / 2.0;
        }
    }
};
 
int main()
{   
    Solution bro;

    vector<int> x = {1,4,5,6,9};
    vector<int> y = {2,3,8,11};

    int ans = bro.findMedianSortedArrays(x , y);
    cout<< ans << endl;
}
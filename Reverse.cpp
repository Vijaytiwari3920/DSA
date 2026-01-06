#include<iostream>
using namespace std;

class Solution 
{
public:
    int reverse(int x) 
    {

        int ans = 0;
        int n;
            while ( x > 0 )
            {
                n = x % 10 ;
                ans = ans * 10 + n ;
                x/=10 ;
            }
        cout<<ans<<endl;
        return ans;
    }
};
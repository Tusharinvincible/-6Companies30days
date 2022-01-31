#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to count number of ways to reach the nth stair 
    //when order does not matter.
    long long countWays(int m)
    {
        // your code here
        if(m==0){
            return 0;
        }
        long long ans=(m/2)+1;
        
        return ans;
    }
};
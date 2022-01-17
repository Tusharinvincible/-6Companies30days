
#include <bits/stdc++.h>
using namespace std;






class Solution{
    public:
    
    // int isPossible(int k,int n,int x,vector <int> &dp){
    //     if(n==0){
    //         dp[0]=1;
    //         return dp[0];
    //     }
    //     if(i==0){
            
    //     }
    //     if(dp[n]!=-1){
    //         return dp[n];
    //     }
        
    // }
    long long numOfWays(int n, int x)
    {
        // code here
        
        vector <long long> dp(n+1,0);
        dp[0]=1;
    
        
        for(int i=1;i<=pow(n,(1.0/x));i++){
            int k=pow(i,x);
            for(int j=n;j>=k;j--){
                
                dp[j]+=dp[j-k];
            }
        }
        
        
        return dp[n];
    }
};
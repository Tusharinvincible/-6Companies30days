


#include <bits/stdc++.h>
using namespace std;




class Solution{
public:
    int isPossible(int n,int s,vector <vector <int>> &dp,int arr[]){
        if(s==0){
            dp[n][s]=1;
            return dp[n][s];
        }
        
        if(n==0){
            dp[n][s]=0;
            return dp[n][s];
        }
        
        if(dp[n][s]!=-1){
            return dp[n][s];
        }
        
        if(arr[n-1]<=s){
            dp[n][s]=max(isPossible(n-1,s-arr[n-1],dp,arr),isPossible(n-1,s,dp,arr));
        }
        else{
            dp[n][s]=isPossible(n-1,s,dp,arr);
        }
        
        return dp[n][s];
        
    }
    int equalPartition(int n, int arr[])
    {
        // code here
        int s=0;
        int N=n;
        for(int i=0;i<N;i++){
            s+=arr[i];
        }
        if(s%2==1){
            return 0;
        }
        else{
            vector <vector <int> > dp(n+1,vector <int> (s/2+1,-1));
            // for(int i=0;i<n;i++){
            //     dp[i][0]=1;
            // }
            int k=s/2;
            // dp[0][0]=1;
            // for(int i=1;i<=n;i++){
                
            //     for(int j=1;j<=(s/2);j++){
                    
            //         if(arr[i-1]<=j){
            //             dp[i][j]=max(dp[i-1][j],dp[i-1][j-arr[i-1]]);
            //         }
            //         else
            //         dp[i][j]=dp[i-1][j];
            //     }
            // }
            
            isPossible(n,k,dp,arr);
            return dp[n][k];
        }
    }
};
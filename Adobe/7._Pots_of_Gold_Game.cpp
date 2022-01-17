#include <bits/stdc++.h>
using namespace std;


   
int maxC(int i,int j,vector <int> &A,vector <vector <int>> &dp){
        if(j<i){
            return 0;
        }
        
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int c1=A[i]+min(maxC(i+2,j,A,dp),maxC(i+1,j-1,A,dp));
        int c2=A[j]+min(maxC(i+1,j-1,A,dp),maxC(i,j-2,A,dp));
        dp[i][j]=max(c1,c2);
        
        return dp[i][j];
}
int maxCoins(vector<int>&A,int n)
    {
	    //Write your code here
	    vector <vector <int>> dp(n+1,vector <int> (n+1,-1));
	    int i=0;
	    int j=n-1;
	    maxC(i,j,A,dp);
	    
	    return dp[0][n-1];
	    
	    
}
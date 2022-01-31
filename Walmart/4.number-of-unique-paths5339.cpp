//Initial template for C++
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution
{
    public:
    //Function to find total number of unique paths.
    int NumberOfPath(int a, int b)
    {
        //code here
        int m=(a+b-2);
        int n=(a-1);
        vector <vector <int>> dp(m+1,vector <int> (n+1,0));
        
        
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                if(j>i){
                    dp[i][j]=0;
                }
                else if(i==j || j==0){
                    dp[i][j]=1;
                }
                else{
                    dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
                }
            }
        }
        return dp[m][n];
    }
};

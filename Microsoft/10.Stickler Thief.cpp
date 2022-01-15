//Function to find the maximum money the thief can get.

#include <bits/stdc++.h>
using namespace std;

    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        if(n==1){
            return arr[0];
        }
        if(n==2){
            return max(arr[0],arr[1]);
        }
        else{
            int dp[n];
            dp[0]=arr[0];
            dp[1]=arr[1];
            dp[2]=arr[2]+arr[0];
            
            for(int i=3;i<n;i++){
                dp[i]=arr[i]+max(dp[i-2],dp[i-3]);
            }
            
            return max(dp[n-1],dp[n-2]);
        }
    }
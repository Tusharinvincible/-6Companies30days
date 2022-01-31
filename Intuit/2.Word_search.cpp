#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

  public:
  
  
  int minPermutation(int n,int s,int sum,int ans,int arr[],vector <vector <int>> &dp){
      if(n==0){
          //ans=min(ans,abs(sum-2*s));
          
          dp[n][s]=abs(sum-2*ans);
          return dp[n][s];
      }
      
      // dp[i][s]=min(dp[i][j] ,dp[]s-2*arr[i-1])
     if(dp[n][s]!=-1){
         return dp[n][s];
     }
     
     dp[n][s]=min(minPermutation(n-1,s-arr[n-1],sum,ans+arr[n-1],arr,dp),minPermutation(n-1,s,sum,ans,arr,dp));
     
     return dp[n][s];
     
     
      
      
  }
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    
	   int sum=0;
	   int ans=0;
	   int s=0;
	   for(int i=0;i<n;i++){
	       sum+=arr[i];
	   }
	   s=sum;
	    vector <vector <int>> dp(n+1, vector <int> (sum+1,-1));
	   int k=minPermutation(n,s,sum,ans,arr,dp);
	   
	   return k;
	  
	   //dp[0]=0;
	   
	   //for(int i=0;i<n;i++){
	       
	   //    for(int j=1;j<=sum;j++){
	   //        if(arr[i]<=j && dp[j-arr[i]]!=INT_MAX){
	               
	   //            dp[j]=min(dp[j],j-arr[i]);
	   //        }
	           
	   //    }
	   //}
	   //for(int x: dp){
	   //    cout<<x<<" ";
	   //}
	   //return 1;
	} 
};


#include <bits/stdc++.h>
using namespace std;




 int lengthOfLongestAP(int A[], int n) {

     int ans=0;
     vector <unordered_map <int,int>> dp(n);

     for(int i=1;i<n;i++){

         for(int j=(i-1);j>=0;j--){

             int diff=A[i]-A[j];

             if(dp[j].find(diff)==dp[j].end()){
                 dp[i][diff]=2;
             }
             else{
                 dp[i][diff]+=dp[j][diff]+1;
             }

             ans=max(ans,dp[i][diff]);
         }
     }

     return ans;



 }





int main(){


    return 0;
}
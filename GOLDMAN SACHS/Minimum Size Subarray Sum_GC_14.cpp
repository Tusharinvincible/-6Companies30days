#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start=0;
        int s=0;
        int ans=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n;i++){
            s+=nums[i];
          //  if(s>=target){
                
                
                while(start<=i && s>=target){
                   // if(s>=target){
                        ans=min(ans,i-start+1);
                    //}
                    s-=nums[start];
                    
                    start++;
                }
            }
      //  }
        if(s>=target){
            ans=min(ans,n-1-start+1);
        }
        
        if(ans==INT_MAX){
            return 0;
        }
        else{
            return ans;
        }
        
    }
};
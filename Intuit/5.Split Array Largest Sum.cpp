#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    bool isPossible(vector <int> &nums,int mid,int m){
        int p=0;
        int i=0;
        int n=nums.size();
        
        while(i<n && p<m){
            int s=0;
            
            while(i<n && (s+nums[i])<=mid){
                s+=nums[i];
                i++;
            }
            p++;
        }
        
        if(i<n){
            return false;
        }
        return true;
    }
    int splitArray(vector<int>& nums, int m) {
        int low=0;
        int high=0;
        
        for(int x: nums){
            high+=x;
        }
        
        while(low<=high){
            int mid=low+(high-low)/2;
            
            if(isPossible(nums,mid,m)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        
        return low;
    }
};
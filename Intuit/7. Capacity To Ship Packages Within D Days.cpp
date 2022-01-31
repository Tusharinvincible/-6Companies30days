
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        long long low=1;
        long long high=0;
        int n=weights.size();
        
        for(int x: weights){
            high+=x;
        }
        
        while(low<=high){
            long long mid=(low+(high-low)/2);
            
            int i=0;
            
            int day=0;
            while(i<n && day<days){
                long long s=0;
                while(i<n && (s+weights[i])<=mid){
                    s+=weights[i];
                    i++;
                }
                day+=1;
            }
            
            if(i<n){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
            
        }
        return low;
        
    }
};
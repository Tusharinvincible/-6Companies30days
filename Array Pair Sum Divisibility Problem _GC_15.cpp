#include <bits/stdc++.h>
using namespace std;


bool canPair(vector<int> nums, int k) {
        // Code here.
        int n=nums.size();
        map <int,int> mp;
        for(int i=0;i<n;i++){
            int rem=nums[i]%k;
            mp[rem]++;
            
        }
        for(int i=1;i<=(k)/2;i++){
            int a=mp[i];
            int b=mp[k-i];
            if(a!=b){
                return false;
            }
        }
        
        if(k%2==0){
            int a=mp[k/2];
            if(a%2!=0){
                return false;
            }
        }
        
        if(mp[0]%2!=0){
            return  false;
        }
        return true;
    }
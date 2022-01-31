
#include <bits/stdc++.h>
using namespace std;




bool compare(string a,string b){
        
        
        int len1=a.size();
        int len2=b.size();
        
        if(len1<len2){
            return true;
        }
        else if(len1==len2){
            return a<b;
        }
        return false;
}

class Solution {
public:
   
    string kthLargestNumber(vector<string>& nums, int k) {
        int n=nums.size();
        cout<<n<<"   "<<k<<endl;
        k=n-k;
        sort(nums.begin(),nums.end(),compare);
        
        return nums[k];
    }
};
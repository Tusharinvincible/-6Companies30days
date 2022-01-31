#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestMountain(vector<int>& arr) {
        
        int n=arr.size();
        
        vector <int> left(n,0);
        
        for(int i=1;i<n;i++){
            if(arr[i]>arr[i-1]){
                if(left[i-1]==0){
                    left[i-1]++;
                    left[i]=left[i-1]+1;
                }
                else {
                    left[i]=(left[i-1]+1);
                }
                
            }
            // else{
            //     if(left)
            //     left[i-1]=0;
            // }
        }
        
        vector <int> right(n,0);
        
        for(int i=(n-2);i>=0;i--){
            if(arr[i]>arr[i+1]){
                if(right[i+1]==0){
                    right[i+1]++;
                    right[i]=2;
                }
                else{
                    right[i]=right[i+1]+1;
                }
            }
//             else{
//                 right[i+1]=0;
//             }
                
        }
//         left[0]=1;
//         for(int i=1;i<n;i++){
//             int ct=0;
//             for(int j=(i-1);j>=0;j--){
//                 if(arr[j]<arr[i]){
//                     ct=max(ct,left[j]);
//                 }
//             }
//             left[i]=ct+1;
//         }
        
//         vector <int> right(n,0);
//         right[n-1]=1;
        
//         for(int i=(n-2);i>=0;i--){
//             int ct=0;
            
//             for(int j=i+1;j<n;j++){
                
//                 if(arr[j]<arr[i]){
//                     ct=max(ct,right[j]);
//                 }
//             }
//             right[i]=ct+1;
//         }
        for(int i=0;i<n;i++){
            cout<<left[i]<<"  "<<right[i]<<endl;
        }
        int ans=0;
        
        for(int i=0;i<n;i++){
            if(left[i]>1 && right[i]>1){
                ans=max(ans,left[i]+right[i]-1);
            }
        }
        
        return ans;
    }
};
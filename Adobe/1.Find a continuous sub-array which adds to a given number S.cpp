
#include <bits/stdc++.h>
using namespace std;

   //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        vector <int> ans;
        int start=0;
        int end=0;
        long long sum=0;

        for(int i=0;i<n;i++){
            sum+=arr[i];

            while(start<i && sum>s){
                sum-=arr[start];
                start++;
            }

            if(sum==s){
                end=i;
                break;
            }
        }

        for(int i=start;i<end;i++){
            ans.push_back(arr[i]);
        }
        return ans;

}
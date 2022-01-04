#include <bits/stdc++.h>
using namespace std;

int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int start=0;
        int i=0;
        int ct=0;
        long long ans=1;
        while(i<n){
            ans=ans*a[i];
            while(start<i && ans>=k){
                ans=ans/a[start];
                start++;
            }
            if(ans<k){
                ct=(ct+i-start+1);
            }
            i++;
        }
        return ct;
}


int main(){
    return 0;
}

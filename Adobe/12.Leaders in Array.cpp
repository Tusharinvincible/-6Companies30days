
#include <bits/stdc++.h>
using namespace std;








class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector <int> ans;
        ans.push_back(a[n-1]);
        stack <int> st;
        st.push(a[n-1]);
        for(int i=n-2;i>=0;i--){
            while(!st.empty() && a[i]>=st.top()){
                st.pop();
            }
            
            if(st.empty()){
                ans.push_back(a[i]);
            }
            st.push(a[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
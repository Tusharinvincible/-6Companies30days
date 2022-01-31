
#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    vector<int> find3Numbers(vector<int> arr, int N) {
        // Your code here
        vector <int> ans;
        
        stack <int> st;
        
        for(int i=0;i<N;i++){
            // if(arr[i]>st.top()){
            //     st.push(arr[i]);
            // }
            // else{
                while(!st.empty() && arr[i]<st.top()){
                    st.pop();
                }
                if(st.empty()){
                     st.push(arr[i]);
                }
                else if(arr[i]>st.top()){
                 st.push(arr[i]);   
                }
               
           // }
            
            if(st.size()==3){
                while(!st.empty()){
                    ans.push_back(st.top());
                    st.pop();
                } 
                reverse(ans.begin(),ans.end());
                return ans;
            }
        }
        
        while(!st.empty()){
            st.pop();
        }
        
        for(int i=N-1;i>=0;i--){
            while(!st.empty() && arr[i]>st.top()){
                st.pop();
            }
            
            if(st.empty()){
                st.push(arr[i]);
            }
            else if(arr[i]<st.top()){
                st.push(arr[i]);
            }
             if(st.size()==3){
                while(!st.empty()){
                    ans.push_back(st.top());
                    st.pop();
                }   
                return ans;
            }
            
        }
        return ans;
    }
};
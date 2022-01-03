#include <bits/stdc++.h>
using namespace std;

string printMinNumberForPattern(string S){

    // if the charcter is I increase curr number and push to ans
    // If the charcter is D increase number till D it into the stack then pop it from stack.

    stack <int> st;
    int curr=1;

    int n=S.size();
    string ans="";
    for(int i=0;i<n;i++){
        char ch=S[i];

        if(ch=='D'){
            st.push(curr);
            curr++;
        }
        else{
            st.push(curr);
            curr++;
            while(!st.empty()){
                char c='0'+st.top();
                ans.push_back(c);
                st.pop();
            }
        }
    } 
    st.push(curr);
     while(!st.empty()){
                char c='0'+st.top();
                ans.push_back(c);
                st.pop();
    }


            return ans;



  }

int main(){


    return 0;
}
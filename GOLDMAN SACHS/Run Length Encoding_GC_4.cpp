#include <bits/stdc++.h>
using namespace std;


string encode(string src)
{     
  //Your code here 
  int n=src.size();
  stack <char> st;
  string ans="";
  int ct=0;
  for(int i=0;i<n;i++){
      if(st.empty()){
          st.push(src[i]);
          ct=1;
      }
      else{
          if(st.top()==src[i]){
              ct++;
          }
          else{
              char c=st.top();
              st.pop();
              ans+=c;
              string temp=to_string(ct);
              ans+=temp;
              st.push(src[i]);
              ct=1;
          }
      }

  }
        char c=st.top();
              st.pop();
              ans+=c;
              string temp=to_string(ct);
              ans+=temp;
              return ans;
}     
 
int main(){

    return 0;
}

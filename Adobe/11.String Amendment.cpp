

#include <bits/stdc++.h>
using namespace std;

string amendSentence (string s)
    {
        // your code here
        int n=s.size();
        int i=1;
        string ans="";
        if(s[0]>='A' && s[0]<='Z'){
                int k=s[0]+32;
                char c=k;
                s[0]=c;
                ans.push_back(s[0]);
            }
            else{
                ans.push_back(s[0]);
            }
        while(i<n){
            if(s[i]>='A' && s[i]<='Z'){
                int k=s[i]+32;
                char c=k;
                s[i]=c;
                ans.push_back(' ');
                ans.push_back(s[i]);
                
            }
            else
            ans.push_back(s[i]);
            i++;
        }
        return ans;
        
        
    }
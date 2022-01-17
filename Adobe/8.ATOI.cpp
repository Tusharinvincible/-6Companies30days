

#include <bits/stdc++.h>
using namespace std;




 int atoi(string str) {
        //Your code here
        int ans=0;
        int i=0;
        int n=str.size();
        int sign=1;
        while(i<n){
             if(str[i]>='0' && str[i]<='9'){
                     break;
                }
            else if(str[i]=='+'){
                sign=1;
                i++;
                break;
            }
            else if(str[i]=='-'){
                sign=-1;
                i++;
                break;
            }
            else {
                return -1;
            }
            i++;
        }
        
       // cout<<" i is : "<<i<<endl;
        while(i<n){
            if(str[i]>='0' && str[i]<='9'){
                ans=ans*10+(str[i]-'0')*sign;
            }
            else{
                return -1;
            }
            i++;
        }
       // cout<<"ans is "<<ans<<endl;
        return ans;
        
    }
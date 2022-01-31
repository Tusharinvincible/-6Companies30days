#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the largest number after k swaps.
    void findMax(string str, int k,int curr,string &maxi){
        if(k==0){
            return;
        }
        int maxi_char=str[curr];
        for(int i=curr+1;i<str.size();i++){
            if(str[i]>maxi_char){
                maxi_char=str[i];
            }
        }
        if(maxi_char!=str[curr]){
            k--;
        }
        for(int j=str.size()-1;j>=curr;j--){
            if(maxi_char==str[j]){
                char temp1=str[j];
                str[j]=str[curr];
                str[curr]=temp1;
                
                if(str.compare(maxi)>0){
                    maxi=str;
                }
                findMax(str,k,curr+1,maxi);
                char temp2=str[j];
                str[j]=str[curr];
                str[curr]=temp2;
            }
            
            
        }
    }

    string findMaximumNum(string str, int k)
    {
       // code here.
     string maxi=str;
     int curr=0;
     findMax(str,k,curr,maxi);
     
     return maxi;
       
       
    }
};

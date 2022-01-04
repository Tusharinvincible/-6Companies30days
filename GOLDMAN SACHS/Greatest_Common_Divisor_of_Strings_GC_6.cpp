#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
   bool isPossible(string temp,string a,string b){
       int len=temp.size();
       int n1=a.size();
       int n2=b.size();
       
       if(n1%len!=0 || n2%len!=0){
           return false;
       }
       
       int i=0;
      
       while(i<n1){
           int j=0;
           while(j<len){
               if(temp[j]!=a[i]){
                   return false;
               }
               i++;
               j++;
           }
           
       }
       
       i=0;
         while(i<n2){
           int j=0;
           while(j<len){
               if(temp[j]!=b[i]){
                   return false;
               }
               i++;
               j++;
           }
           
       }
       return true;
   }
          
   string gcdOfStrings(string a, string b) {
      //return (a + b== b + a)  ? a.substr(0, gcd(a.length(), b.length())): "";
       int n=a.size();
       string ans="";
       string temp="";
       for(int i=0;i<n;i++){
           temp+=a[i];
           bool check=isPossible(temp,a,b);
           if(check){
               ans=temp;
           }
       }
       
       return ans;
       
       
    }
        
  
};



int main(){

    
    return 0;
}
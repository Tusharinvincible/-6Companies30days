#include <bits/stdc++.h>
using namespace std;



class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
        string s="";
        
        while(n>0){
            n--;
            
            int rem=n%26;
            char c='A'+rem;
            s=c+s;
            n/=26;
        }
        return s;
    }
};
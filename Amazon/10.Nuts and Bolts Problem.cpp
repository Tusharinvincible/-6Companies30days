

#include <bits/stdc++.h>
using namespace std;
 bool cmp(char a,char b){
        unordered_map <char,int> mp;
        
        mp['!']=10;
        mp['#']=9;
        mp['$']=8;
        mp['%']=7;
        mp['&']=6;
        mp['*']=5;
        mp['@']=4;
        mp['^']=3;
        mp['~']=2;
        
        return mp[a]>=mp[b];
    }

class Solution{
public:	
 
	void matchPairs(char nuts[], char bolts[], int n) {
	    // code here
	    sort(nuts,nuts+n,cmp);
	    sort(bolts,bolts+n,cmp);
	}

};
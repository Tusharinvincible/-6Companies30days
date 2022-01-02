#include <bits/stdc++.h>
using namespace std;

vector<vector<string> > Anagrams(vector<string>& string_list) {
        int n=string_list.size();
        map <string,vector <string>> mp;
        
        for(int i=0;i<n;i++){
            string temp=string_list[i];
            sort(temp.begin(),temp.end());
            mp[temp].push_back(string_list[i]);
        }
        vector <vector <string>> ans;
        
        for(auto it=mp.begin();it!=mp.end();it++){
            ans.push_back(it->second);
        }
        return ans;
}

int main(){

    return 0;
}
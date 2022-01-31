#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        // code here
        
        //sort(contact,contact+n);
        set <string> contact1;//(contact,contact+n);
        vector <vector <string>> ans;
        
        for(int i=0;i<n;i++){
            contact1.insert(contact[i]);
        }
        
        for(int i=0;i<s.size();i++){
            int len=i+1;
            string cmp=s.substr(0,len);
            vector <string> temp;
            // for(int j=0;j<contact1.size();j++){
            //     if(contact1[j].size()>=len){
            //         string cmp1=contact1[j].substr(0,len);
            //         //cout<<cmp<<"  "<<cmp1<<endl;
            //         if(cmp==cmp1){
            //             temp.push_back(contact1[j]);
            //         }
            //     }
                
            // }
            
            for(auto it : contact1){
                string cmp1=it.substr(0,len);
                //if(cmp1.size()>)
                
                if(cmp==cmp1){
                    temp.push_back(it);
                }
                
            }
            
            if(temp.size()==0){
                temp.push_back("0");
            }
            
            ans.push_back(temp);
        }
        
        return ans;
    }
};
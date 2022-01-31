#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    
		   queue <char> q;
		   
		   unordered_map <char,int> mp;
		   string ans="";
		   int n=A.size();
		   for(int i=0;i<n;i++){
		       mp[A[i]]++;
		       
		       if(mp[A[i]]==1){
		           q.push(A[i]);
		       }
		       else{
		           while(!q.empty() && mp[q.front()]>1){
		              // if(q.front()==A[i]){
		              //     q.pop();
		              //     break;
		              // }
		               q.pop();
		           }
		       }
		       if(q.empty()){
		           ans+='#';
		       }
		       else{
		           ans+=q.front();
		       }
		   }
		   return ans;
		}

};







#include <bits/stdc++.h>
using namespace std;





vector<string> generate(int N)
{
	// Your code here
	vector <string> ans;
	queue <string> q;
	int ct=N-1;
	string temp="";
	temp.push_back('1');
	q.push(temp);
	ans.push_back(q.front());
	
	while(ct>0){
	    string curr=q.front();
	    q.pop();
	    
	   q.push(curr+'0');
	   ans.push_back(curr+'0');
	   ct--;
	   
	   if(ct>0){
	       q.push(curr+'1');
	       ans.push_back(curr+'1');
	       ct--;
	   }
	   
	}
	
	return ans;
	
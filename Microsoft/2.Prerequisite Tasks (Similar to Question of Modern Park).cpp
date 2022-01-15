 #include <bits/stdc++.h>
 using namespace std;



void dfs(int src,vector <int> adj[],vector <bool> &isIncluded,vector <int> &ans){
    isIncluded[src]=true;
    for(int x: adj[src]){
        if(isIncluded[x]==false){
            dfs(x,adj,isIncluded,ans);
        }
    }
    ans.push_back(src);
    
}
	bool isPossible(int N, vector<pair<int, int> >& prerequisites) {
	    // Code here
	    
	   vector <int> inorder(N,0);
	   int sz=prerequisites.size();
	   vector <int> adj[N];
	   for(int i=0;i<sz;i++){
	       adj[prerequisites[i].first].push_back(prerequisites[i].second);
	       
	   }
	   
	   vector <bool> isIncluded(N,false);
	   vector <int> ans;
	   for(int i=0;i<N;i++){
	       if(isIncluded[i]==false){
	            dfs(0,adj,isIncluded,ans);
	       }
	   }
	  
	   
	   return ans.size()==N;
	   

	       

	   
	}
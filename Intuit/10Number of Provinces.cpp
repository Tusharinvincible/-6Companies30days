
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void dfs(int src,vector <int> adj[],vector <bool> &vis){
        vis[src]=true;
        
        for(int x: adj[src]){
            
            if(vis[x]==false){
                
                dfs(x,adj,vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector <int> adj[n];
        int ct=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j])
                adj[i].push_back(j);
                //adj[j].push_back(i);
            }
        }
        vector <bool> vis(n,false);
        for(int i=0;i<n;i++){
            if(vis[i]==false){
                cout<<"src is : "<<i<<endl;
                dfs(i,adj,vis);
                ct++;
            }
        }
        return ct;
        
    }
};
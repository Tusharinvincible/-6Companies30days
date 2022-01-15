
#include <bits/stdc++.h>
using namespace std;


 class Node{
     public:
     int data;
     Node* left;
     Node* right;
     //Node *nextRight;
 };

bool dfs(int src,vector <int> adj[],vector <bool> &vis,int d){
        vis[src]=true;
        if(src==d){
            return true;
        }
        for(int x: adj[src]){
            if(vis[x]==false){
                if(dfs(x,adj,vis,d)){
                    return true;
                }
            }
        }
        return false;
    }
    int isBridge(int V, vector<int> adj[], int c, int d) 
    {
        vector <bool> vis(V,false);
        for(int i=0;i<adj[c].size();i++){
            if(adj[c][i]==d){
                adj[c].erase(adj[c].begin()+i);
                break;
            }
        }
        
        for(int i=0;i<adj[d].size();i++){
            if(adj[d][i]==c){
                adj[d].erase(adj[d].begin()+i);
                break;
            }
        }
        bool check=dfs(c,adj,vis,d);
        
        if(check){
            return false;
        }
        else{
            return true;
        }
       
       
    }
#include <bits/stdc++.h>
using namespace std;


 class Node{
     public:
     int data;
     Node* left;
     Node* right;
     //Node *nextRight;
 };


class Solution{
    public:
    void topologicalSort(vector <int> adj[],string &ans,vector <bool> &vis,int node){
        vis[node]=true;
        for(int x: adj[node]){
            if(vis[x]==false){
                topologicalSort(adj,ans,vis,x);
            }
        }
        ans.push_back(node+'a');
    }
    string findOrder(string dict[], int N, int K) {
        vector <int> adj[K];
        for(int i=0;i<(N-1);i++){
            
            int min_len=min(dict[i].size(),dict[i+1].size());
            
            for(int j=0;j<min_len;j++){
                
                if(dict[i][j]!=dict[i+1][j]){
                    
                    adj[dict[i][j]-'a'].push_back(dict[i+1][j]-'a');
                    
                    break;
                }
            }
        }
        
        string ans="";
        vector <bool> vis(K,false);
        for(int i=0;i<K;i++){
            if(vis[i]==false){
                topologicalSort(adj,ans,vis,i);
            }
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
       
    }

};


#include <bits/stdc++.h>
using namespace std;

class cmp{
    public:
    bool operator()(pair <int,double> p1,pair <int,double> p2){
        
        return p1.second<p2.second;
    }
};

class Solution {
public:
    
//     void dfs(  vector <pair <int,double>> adj[],vector <bool> &vis,double temp,double &ans,int src,int end){
        
//         if(src==end){
//             if(temp>ans){
//                 ans=temp;
//             }
//             //ans=max(ans,temp);
//             return;
//         }
        
//         for(auto x: adj[src]){
//             int u=x.first;
//             double v=x.second;
            
//             if(vis[u]==false){
                
//                 vis[u]=true;
//                 cout<<temp*v<<endl;
                
//                 dfs(adj,vis,temp*v,ans,u,end);
//                 vis[u]=false;
//             }
//         }
//     }
    
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {    
        double ans=0;
        double temp=1.0;
        vector <double> prob(n,DBL_MIN);
        vector <pair <int,double>> adj[n];
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back({edges[i][1],succProb[i]});
            adj[edges[i][1]].push_back({edges[i][0],succProb[i]});

        }
        prob[start]=1.0;
        
        priority_queue < pair <int,double> , vector <pair <int,double> >, cmp > pq;
        
        pq.push({start,1.0});
        
        while(!pq.empty()){
            int u=pq.top().first;
            double curr=pq.top().second;
            pq.pop();
            for(auto x: adj[u]){
                int v=x.first;
                double p=x.second;
                
                
                if((p*curr)>prob[v]){
                    prob[v]=p*curr;
                    pq.push({v,prob[v]});
                }
            }
        }
        
        if(prob[end]==DBL_MIN){
            return 0.00;
        }
        else{
            return prob[end];
        }
        
        
        
    }
};
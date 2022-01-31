#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int xarr[4]={1,-1,0,0};
    int yarr[4]={0,0,1,-1};
    bool isPossible(int x,int y,vector <vector <int>> &grid,vector <vector <bool>> &vis,int n,int m){
        if(x>=0 && y>=0 && x<n && y<m && vis[x][y]==false && grid[x][y]==0){
            return true;
        }
        return false;
    }
    int getDistance(queue <pair <int,int>> &q,vector <vector <int>> &grid,vector <vector <bool>> &vis){
       int dis=1;
        int n=grid.size();
        int m=grid[0].size();
        while(!q.empty()){
            int sz=q.size();
            
            for(int i=0;i<sz;i++){
                int x=q.front().first;
                int y=q.front().second;
                q.pop();
                
                for(int j=0;j<4;j++){
                    
                    int newx=x+xarr[j];
                    
                    int newy=y+yarr[j];
                    
                    if(isPossible(newx,newy,grid,vis,n,m)){
                        
                        vis[newx][newy]=true;
                        
                        q.push({newx,newy});
                        
                        if(dis==1){
                            grid[newx][newy]=1;
                        }
                        else{
                            grid[newx][newy]=1+grid[x][y];
                        }
                    }
                }
            }
            dis++;
        }
        return 0;
    }
    int maxDistance(vector<vector<int>>& grid) {
        int ans=-1;
        
        int n=grid.size();
        int m=grid[0].size();
        queue <pair <int,int> > q;
        for(int i=0;i<n;i++){
            
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    q.push({i,j});
                }
            }
        }
        vector <vector <bool>> vis(n,vector <bool> (m,false));
        getDistance(q,grid,vis);
        
        
        for(int i=0;i<n;i++){
            
            for(int j=0;j<m;j++){
                
                if(vis[i][j]==true){
                    ans=max(ans,grid[i][j]);
                }
            }
        }
        
        return ans;
        
    }
};
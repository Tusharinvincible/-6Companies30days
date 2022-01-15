 #include <bits/stdc++.h>
 using namespace std;


 bool isPossible(int x,int y,int n,int m,vector<vector<int>> &grid,vector <vector <bool>> &vis){
        if(x>=0 && x<n && y>=0 && y<m && grid[x][y]==1 && vis[x][y]==false){
            return true;
        }
        return false;
    }
    int findMaxArea(vector<vector<int>>& grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        
        vector <vector <bool> > vis(n,vector <bool> (m,false));
        int mx=INT_MIN;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && vis[i][j]==false ){
                    
                    queue <pair <int,int>> q;
                    q.push({i,j});
                    int tot=0;
                    vis[i][j]=true;
                    while(!q.empty()){
                        int sz=q.size();
                        tot+=sz;
                        for(int i=0;i<sz;i++){
                            
                        
                        int x=q.front().first;
                        int y=q.front().second;
                        
                        q.pop();
                        
                        if(isPossible(x+1,y,n,m,grid,vis)){
                          vis[x+1][y]=true;
                            q.push({x+1,y});
                        }
                        if(isPossible(x+1,y+1,n,m,grid,vis)){
                            vis[x+1][y+1]=true;
                            q.push({x+1,y+1});
                        }
                        if(isPossible(x+1,y-1,n,m,grid,vis)){
                            vis[x+1][y-1]=true;
                            q.push({x+1,y-1});
                        }
                        if(isPossible(x-1,y,n,m,grid,vis)){
                            vis[x-1][y]=true;
                            q.push({x-1,y});
                        }
                        if(isPossible(x-1,y-1,n,m,grid,vis)){
                            vis[x-1][y-1]=true;
                            q.push({x-1,y-1});
                        }
                        if(isPossible(x-1,y+1,n,m,grid,vis)){
                            vis[x-1][y+1]=true;
                            q.push({x-1,y+1});
                        }
                        if(isPossible(x,y-1,n,m,grid,vis)){
                            vis[x][y-1]=true;
                            q.push({x,y-1});
                        }
                        if(isPossible(x,y+1,n,m,grid,vis)){
                            vis[x][y+1]=true;
                            q.push({x,y+1});
                        }
                    }
                    }
                    mx=max(mx,tot);
                   
                }
                 
            }
        }
        return mx;
    }
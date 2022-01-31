#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    bool isPossible(int x,int y,int n,int m,vector<vector<int>>& mat,vector<vector<bool>>& vis){
        
        if(x>=0 && y>=0 && x<n && y<m && mat[x][y]==1 && vis[x][y]==false){
            return true;
        }
        return false;
    }
    int orangesRotting(vector<vector<int>>& mat) {
        int n=mat.size();  // row
        int m=mat[0].size();  // col
        
        int toBeRotten=0;
        int ct=0;
        queue <pair <int,int>> q;
        vector <vector <bool>> vis(n,vector <bool> (m,false));
        for (int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==2){
                    q.push({i,j});
                    toBeRotten++;
                    vis[i][j]=true;
                }
                else if(mat[i][j]==1){
                    toBeRotten++;
                }
            }
        }
        
        int step=0;
        int xarr[4]={0,0,1,-1};
        int yarr[4]={1,-1,0,0};
        while(!q.empty()){
            int sz=q.size();
            ct+=sz;
            bool isAny=false;
            for(int i=0;i<sz;i++){
                
                int x=q.front().first;
                int y=q.front().second;
                q.pop();
                
                for(int j=0;j<4;j++){
                    int newx=x+xarr[j];
                    int newy=y+yarr[j];
                    
                    if(isPossible(newx,newy,n,m,mat,vis)){
                        vis[newx][newy]=true;
                        isAny=true;
                        q.push({newx,newy});
                    }
                }
                
            }
            
            if(isAny){
                step++;
            }
            
            
        }
        if(ct==toBeRotten){
            return step;
        }
        return -1;
         
       
    }
    };
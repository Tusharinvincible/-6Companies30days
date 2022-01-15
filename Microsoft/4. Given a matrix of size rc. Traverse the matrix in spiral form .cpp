 #include <bits/stdc++.h>
 using namespace std;


vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        
        vector <int> ans;
        int top=0;
        int bottom=r-1;
        int left=0;
        int right=c-1;
        int ct=r*c;
        while( ct>0){
            int row;
            int col;
            
            //row=top;
            col=left;
           // cout<<"left is "<<left<<endl;
           // cout<<"right is "<<right<<endl;
            
            while(col<=right && ct>0){
                
                ans.push_back(matrix[top][col]);
                ct--;
                col++;
            }
            top++;
            
            row=top;
            //col=right-1;
            
            while(row<=bottom && ct>0){
                ans.push_back(matrix[row][right]);
                ct--;
                row++;
            }
            right--;
            
           // row=bottom-1;
            col=right;
          
            while(col>=left && ct>0){
                ans.push_back(matrix[bottom][col]);
                ct--;
                col--;
            }
            
            bottom--;
            
            row=bottom;
           // col=left;
            
            while(row>=top && ct>0){
                ans.push_back(matrix[row][left]);
                ct--;
                row--;
            }
            
            left++;
        }
        return ans;
    }
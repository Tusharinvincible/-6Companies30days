

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    int getSum(Node* root){
        if(root==NULL){
            return 0;
        }
        int lsum=getSum(root->left);
        int rsum=getSum(root->right);
        
        int res=lsum+rsum+root->data;
        root->data=lsum+rsum;
        
        return res;
    }
    void toSumTree(Node *node)
    {
        // Your code here
        getSum(node);
        
    }
};
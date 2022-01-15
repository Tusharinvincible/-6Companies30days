#include <bits/stdc++.h>
using namespace std;


 class Node{
     public:
     int data;
     Node* left;
     Node* right;
     //Node *nextRight;
 };

int isPossible(Node* root,int X,int &ct){
    if(root==NULL){
        return 0;
    }
    int lSum=isPossible(root->left,X,ct);
    int rSum=isPossible(root->right,X,ct);
    
    int sum=root->data+lSum+rSum;
    if(sum==X){
        ct++;
    }
    
    return sum;
}
int countSubtreesWithSumX(Node* root, int X)
{
	if(root==NULL){
	    return 0;
	}
	int ct=0;
	isPossible(root,X,ct);
	
	return ct;
	
	
}
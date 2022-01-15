






 #include <bits/stdc++.h>
 using namespace std;

 class Node{
     public:
     int data;
     Node* left,right;
     Node *nextRight;
 };

class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
       // Your Code Here
       
       queue <Node*> q;
       q.push(root);
       q.push(NULL);
       
       while(!q.empty() && q.front()!=NULL){
           while(q.front()!=NULL){
               Node* curr=q.front();
               q.pop();
               
               curr->nextRight=q.front();
               
               if(curr->left){
                   q.push(curr->left);
               }
               if(curr->right){
                   q.push(curr->right);
               }
           }
           q.pop();
           if(!q.empty()){
               q.push(NULL);
           }
       }
    }    
      
};
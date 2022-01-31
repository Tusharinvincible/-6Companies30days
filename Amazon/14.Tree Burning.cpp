
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  Node* targetNode(Node* root,map <Node*,Node*> &parent,int target){
      queue <Node*> q;
      q.push(root);
      
      while(!q.empty()){
          Node* curr=q.front();
          q.pop();
          if(curr->data==target){
              return curr;
          }
          
          if(curr->left){
              q.push(curr->left);
              parent[curr->left]=curr;
          }
          if(curr->right){
              q.push(curr->right);
              parent[curr->right]=curr;
          }
          
      }
      
  }
    int minTime(Node* root, int target) 
    {
        // Your code goes here
        map <Node*,Node*> parent;
        Node* target_Node=targetNode(root,parent,target);
        
        queue <Node*> q;
        q.push(target_Node);
        map <Node* ,bool> vis;
        
        int ans=0;
        
        while(!q.empty()){
            bool any=false;
            
        int sz=q.size();
        
        for(int i=0;i<sz;i++){
            Node* curr=q.front();
            vis[curr]=true;
            q.pop();
            if(parent.find(curr)!=parent.end() && vis[parent[curr]]!=true){
                any=true;
                q.push(parent[curr]);
            }
            if(curr->left && vis[curr->left]!=true){
                any=true;
                q.push(curr->left);
            }
            if(curr->right && vis[curr->right]!=true){
                any=true;
                q.push(curr->right);
            }
        }
        if(any){
            
            ans++;
        }
        }
        return ans;
        
    }
};
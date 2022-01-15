

#include <bits/stdc++.h>
using namespace std;


 class Node{
     public:
     int data;
     Node* left;
     Node* right;
     //Node *nextRight;
 };


int minSteps(int D){
        // code here
        int s=0;
        
        int val=1;
        while(s<=D){
            s+=val;
             val++;
            if(s==D){
                return val-1;
            }
           
            
        }
        
        while((s-D)%2){
            s+=val;
            val++;
        }
        return val-1;
    }
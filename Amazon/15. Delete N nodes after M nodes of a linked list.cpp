#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    Node* deleteNode(struct Node* &head,int M,int N){
        int ct=1;
        Node* temp=head;
        while(ct<M && temp!=NULL){
            temp=temp->next;
            ct++;
        }
        if(temp==NULL){
            return head;
        }
        ct=0;
        Node* temp1=temp->next;
        ct=0;
        while(ct<N && temp1!=NULL){
            temp1=temp1->next;
            ct++;
        }
        
        temp->next=deleteNode(temp1,M,N);
        return head;
        
        
    }
    void linkdelete(struct Node  *head, int M, int N)
    {
        //Add code here   
        deleteNode(head,M,N);
        
       // return ans;
    }
};
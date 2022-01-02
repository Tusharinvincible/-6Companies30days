#include <bits/stdc++.h>
using namespace std;

int *findTwoElement(int *arr, int n) {
        
        int xor_=0;
        
        for(int i=0;i<n;i++){
            xor_=xor_^arr[i];
            xor_=xor_^(i+1);
        }
        
        xor_=xor_&(-xor_);
        int num1=0;
        int num2=0;
        for(int i=0;i<n;i++){
            if(xor_&arr[i]){
                num1=num1^arr[i];
            }
            else{
                num2=num2^arr[i];
                
            }
            
            if((i+1)&xor_){
                num1=num1^(i+1);
            }
            else{
                num2=num2^(i+1);
            }
        }
        
        int *ans;
        ans=new int[2];
        for(int i=0;i<n;i++){
            if(arr[i]==num1){
                ans[1]=num2;
                ans[0]=num1;
                return ans;
            }
        }
         for(int i=0;i<n;i++){
            if(arr[i]==num2){
                ans[1]=num1;
                ans[0]=num2;
                return ans;
            }
        }
        
        return ans;
        
      
      
    }
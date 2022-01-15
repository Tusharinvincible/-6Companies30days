 #include <bits/stdc++.h>
 using namespace std;




 vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       
       vector <int> ans(n);
       ans[0]=1;
       stack <int> st;
       st.push(0);
       for(int i=1;i<n;i++){
           while(!st.empty() && price[i]>=price[st.top()]){
               st.pop();
           }
           
           if(st.empty()){
              ans[i]=i+1;
           }
           else{
               ans[i]=i-st.top();
           }
           
           st.push(i);
       }
       return ans;
    }
#include <bits/stdc++.h>
using namespace std;


bool isPossible(stack <char> &st,int ct2,int n){

    if(!st.empty() && st.top()=='(' && ct2<n){
        return true;
    }
    return false;
}

void genParanthesis(int &ct1,int ct2,int n,stack <char> &st,string &str,vector <string> &ans){
    if(ct2==n){
        ans.push_back(str);
        return;
    }

    if(ct1<n){
        st.push('(');
        ct1+=1;
        str+='(';
        genParanthesis(ct1,ct2,n,st,str,ans);
        ct1-=1;
        str.pop_back();
        st.pop();

    }

    if(isPossible(st,ct2,n)){
        ct2+=1;
        st.pop();
        str+=')';
        genParanthesis(ct1,ct2,n,st,str,ans);

        ct2-=1;
        str.pop_back();

        st.push('(');

    }
}








vector <string> Allparenthesis(int n){
    vector <string> ans;
    int ct1=0;
    int ct2=0;
    string str="";
    stack <char> st;
    genParanthesis(ct1,ct2,n,st,str,ans);

    return ans;
}
int main(){

cout<<"hello world : "<<endl;
    return 0;
}
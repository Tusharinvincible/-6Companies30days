#include <bits/stdc++.h>
using namespace std;

long long numOFSquares(int n){
    long long ans=0;
        // n*(n+1)(2*n+1)/6
    for(long long i=1;i<=n;i++){
        ans=ans+(i*i);
    }

    return ans;
}


int main(){
    cout<<numOFSquares(8);

    return 0;
}
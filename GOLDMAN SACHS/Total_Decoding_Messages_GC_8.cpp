#include <bits/stdc++.h>
using namespace std;
int mod=1e9+7;

int CountWays(string str){
		    int n=str.size();
		    vector <int> dp(n+1,0);
		    if(str[0]=='0'){
		        return 0;
		    }
		    
		    dp[0]=1;
		    dp[1]=1;
		    
		    for(int i=2;i<=n;i++){
		        if(str[i-1]!='0'){
		            dp[i]=(dp[i]+dp[i-1])%mod;
		        }
		        if(str[i-2]=='1' ||(str[i-2]=='2' && str[i-1]<'7')){
		            dp[i]=(dp[i]+dp[i-2])%mod;
		        }
		    }
		    return dp[n];
		 
		    
}





int main(){
    return 0;
}
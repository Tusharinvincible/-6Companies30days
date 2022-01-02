#include <bits/stdc++.h>
using namespace std;


class Solution{
    // void seiveOFEratothesis(vector <int> &vec){
    //     int N=1e5+1;
    //     vector <bool> seive(N,true);
    //     seive[0]=false;
    //     seive[1]=false;
    //     for(int i=2;i*i<=(N);i++){
    //         if(seive[i]==true){
    //             for(int j=(i*i);j<=N;j+=i){
    //                 seive[j]=false;
    //             }
    //         }
    //     }
        
    //     for(int i=7;i<=N;i++){
    //         if(seive[i]){
    //             vec.push_back(i);
    //         }
    //     }
    // }
public:	
	 #define ull unsigned long long
	/* Function to get the nth ugly number*/
	bool isPossible(vector <int> &vec,int num){
	    for(int x: vec){
	        if(x>num){
	           // cout<<"num is"<<x<<endl;
	            return true;
	        }
	        if(num%x==0){
	            return false;
	        }
	    }
	  //  cout<<""
	  //cout<<"a"<<endl;
	    return true;
	}
	ull getNthUglyNo(int n) {
	    // code here
        set <ull> s;
        s.insert(1);
        n--;
        
        while(n--){
            auto it=s.begin();
            ull x=*it;
            s.erase(it);
            cout<<"x is : "<<x<<endl;
            s.insert(x*2);
            s.insert(x*3);
            s.insert(x*5);
        }
        
        return *s.begin();
	    
	}
};
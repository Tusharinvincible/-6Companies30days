
#include <bits/stdc++.h>
using namespace std;

/*

Given two Arrays A[] and B[] of length N and M respectively. Find the minimum number of insertions and
 deletions on the array A[], required to make both the arrays identical.
Note: Array B[] is sorted and all its elements are distinct, operations can be
 performed at any index not necessarily at end.

*/


int bs(vector <int> vec,int low,int high,int ele){
    while(low<=high){
        int mid=(low+high)>>1;

        if(vec[mid]<ele){
            low=mid+1;
        }
        else{
            high=mid-1;
        }

    }

    return low;
}

int lis(vector <int> vec){

    int len=1;
    vector <int> l;
    l.push_back(vec[0]);

    for(int i=1;i<vec.size();i++){
        if(vec[i]>l.back()){
            l.push_back(vec[i]);
            len++;
        }
        else{
            int idx=bs(l,0,len-1,vec[i]);
            l[idx]=vec[i];
        }
    }

    return len;
}


 int minInsAndDel(int A[], int B[], int N, int M) {
        // code here
        map <int,int> mp;
        for(int i=0;i<M;i++){
            mp[B[i]]++;
        }

        set <int> s;

        for(int i=0;i<N;i++){
            if(mp[A[i]]){
                s.insert(A[i]);
            }
        }

        vector <int> vec;

        for(int x: s){
            vec.push_back(x);
        }

        int len=lis(vec);

        return N-len;
}
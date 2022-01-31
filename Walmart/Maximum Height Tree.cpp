
class Solution{
public:
    int height(int N){
        // code here
        //cout<<"N is "<<N<<endl;
        int sum=0;
        int level=0;
        while(sum<N){
            level+=1;
            sum+=level;
        }
        
        // if(sum==N){
        //     return level+1;
        // }
        // cout<<"sum is "<<sum<<endl;
       // cout<<level<<endl;
        
        if(sum>N){
            level=level-1;
        }
        return level;
    }
    
};
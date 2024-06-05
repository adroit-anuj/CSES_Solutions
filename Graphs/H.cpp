#include<bits/stdc++.h>
using namespace std;
#define int long long int






int32_t main(){

    int wt,n;cin>>wt>>n;
    vector<int>vec(n),DP(wt+1);
    for(int i=0;i<n;i++)cin>>vec[i];
    DP[0]=0;

    for(int T=1;T<=wt;T++){
        for(int i=0;i<n;i++){
            if(vec[i]<=T){
                DP[T] = max(vec[i]+DP[T-vec[i]],DP[T]);
            }
            else{
                DP[T]=DP[T-vec[i]];
            }
        }
    }
    cout<<DP[wt];


    return 0;
}
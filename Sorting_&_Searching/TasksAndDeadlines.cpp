#include<bits/stdc++.h>
using namespace std;
// By Anuj D.
#define int long long int
 
void func(){
 
    int N;cin>>N;
    pair<int,int>arr[N];
    for(int i=0;i<N;i++)cin>>arr[i].first>>arr[i].second;
    sort(arr,arr+N);
    int ans = 0, sum = 0;
    for(auto ele:arr){
        sum+=ele.first;
        ans += ele.second - sum; 
    }
    cout<<ans;
 
 
}
 
int32_t main(){
    func();
    return 0;
}

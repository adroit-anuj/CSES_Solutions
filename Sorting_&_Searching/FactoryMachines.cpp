#include<bits/stdc++.h>
using namespace std;
// By Anuj D.
#define int long long int
 
void func(){
 
    int N,T;cin>>N>>T;
    int arr[N];for(int &ele:arr)cin>>ele;
    
    int r=INT_MAX,l=0,mid;for(int ele:arr)r=min(ele,r);
    int ans;
    r = T*r;
    while(l<=r){
        mid = (l+r)/2;
        
        int tasks = 0;
        for(int ele:arr)tasks += (mid/ele);
        if(tasks>=T){
            ans = mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout<<ans;
 
 
}
 
int32_t main(){
    func();
    return 0;
}

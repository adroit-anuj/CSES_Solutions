#include<bits/stdc++.h>
using namespace std;
// By Anuj D.
#define int long long int
 
void func(){
 
    int N;cin>>N;
    int arr[N];for(int &ele:arr)cin>>ele;sort(arr,arr+N);
    int sum = 0;
    for(int i=0;i<N-1;i++)sum+=arr[i];
    if(sum<=arr[N-1])cout<<2*arr[N-1];
    else cout<<sum+arr[N-1];
 
 
}
 
int32_t main(){
    func();
    return 0;
}

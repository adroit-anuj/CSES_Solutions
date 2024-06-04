#include<bits/stdc++.h>
using namespace std;
// By Anuj D.
 
void func(){
    int n;cin>>n;
    vector<pair<pair<int,int>,pair<int,int> > >input;
    for(int i=0;i<n;i++){
        int a,d;cin>>a>>d;
        input.push_back(make_pair(make_pair(a,d),make_pair(i,0)));
    }
    sort(input.begin(),input.end());
 
    priority_queue<pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > >PQ;
    PQ.push(make_pair(input[0].first.second,1));
    input[0].second.second = 1;
    
    int max_rooms = 1;
    for(int i=1;i<n;i++){
 
        if(input[i].first.first<=PQ.top().first){
            input[i].second.second = (++max_rooms);
            PQ.push(make_pair(input[i].first.second,max_rooms));
        }
        else{
            input[i].second.second = PQ.top().second;
            PQ.pop();
            PQ.push(make_pair(input[i].first.second,input[i].second.second));
        }
    }
    pair<int,int>ans[n];
    for(int i=0;i<n;i++)ans[i].first =  input[i].second.first,ans[i].second = input[i].second.second;
    sort(ans,ans+n);
    cout<<max_rooms<<endl;
    for(int i=0;i<n;i++)cout<<ans[i].second<<" ";
 
 
}
 
 
 
int main(){int TC=1;while(TC--)func();}

#include<iostream>
#include<vector>
#include<queue>
using namespace std;
#define int long long int
// By AnujDubey
 
vector<int>graph[100001];
vector<int>visited(100001,0);
vector<int>CB(100001,0);
 
 
void make_graph(int e){
    while(e--){
        int a,b;cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
}
 
 
bool bfs(int root){
 
    queue<int>Q;Q.push(root);
    CB[root] = 1;
    while(!Q.empty()){
    
        int front = Q.front();
        Q.pop();
        visited[front] = 1;
        
        for(int child : graph[front]){
 
            int group_child = 3 - CB[front];
            if(visited[child]){
                if(CB[child]!=group_child){return false;}
            }
            else{
                CB[child]=group_child;
                Q.push(child);
                visited[child]=1;
            }
        }
    }
    return true;
 
}
 
 
void func(){
    int n,e;cin>>n>>e;
    make_graph(e);
 
 
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            bool val = bfs(i);
            if(val==false){cout<<"IMPOSSIBLE";return;}
        }
    }
    // cout<<count;
    for(int i=1;i<=n;i++)cout<<CB[i]<<" ";
}
 
 
 
int32_t main(){
    func();
    return 0;
}

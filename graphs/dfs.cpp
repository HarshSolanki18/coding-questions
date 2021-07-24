#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> graph;
void addEdge(int u,int v){
    graph[u].push_back(v);
    graph[v].push_back(u);
}

void dfsHelper(int src,vector<bool> &visited){
   visited[src]=true;
   cout<<src<<" ";
   for(int neighbour:graph[src]){
       if(!visited[neighbour]){
           dfsHelper(neighbour,visited);
       }
   }
}

void dfs(int src,int v){
    vector<bool> visited(v,false);
    dfsHelper(src,visited);
}

int main(){
    int v,e;
    cin>>v>>e;
    graph.resize(v+1);
    while(e--){
        int u,v;
        cin>>u>>v;
        addEdge(u,v);
    }
    dfs(1,v+1);
    return 0;
}
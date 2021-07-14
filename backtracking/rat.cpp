#include<bits/stdc++.h>
using namespace std;
#define ll                  long long int
#define vi                  vector <long long int>
#define inf                 1e18
#define mod                 1000000007
#define loop(i,a,b)         for(int i=(a);i<=(b);i++)
#define pb                  push_back
#define vs                  vector <string>
#define endl                "\n"
int total=0;


void helper(int i,int j,int n,vector<vector<int>> &grid,vector<vector<bool>> &visited){
    if(i==n-1 and j==n-1){
        total++;
        return;
    }
    if(!((i>=0) and (j>=0) and (i<n) and (j<n) and (visited[i][j]=false))){
        return;
    }
    
    //changing state
    visited[i][j]=true;
    if(i+1<n and grid[i+1][j]==0){
        helper(i+1,j,n,grid,visited);
    }
    if(i-1>0 and grid[i-1][j]==0){
        helper(i+1,j,n,grid,visited);
    }
    if(j+1<n and grid[i][j+1]==0){
        helper(i+1,j,n,grid,visited);
    }
    if(j-1>=0 and grid[i][j-1]==0){
        helper(i+1,j,n,grid,visited);
    }
    //back to original state

    visited[i][j]=false;
}


void countWays(vector<vector<int>> &grid){
    int n=grid.size();
    vector<vector<bool>> visited(n,vector<bool>(n,false));
    helper(0,0,n,grid,visited);
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int n;
    cin>>n;
    vector<vector<int>> grid(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }

    countWays(grid);
    cout<<endl<<"Total Paths: "<<total<<endl;
    return 0;
}
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

int qcount=0;
bool isItSafe(vector<vector<bool>> &grid,int row,int col,int n){
    //col check
    for(int i=row-1;i>=0;i--){
        if(grid[i][col]) return false;
    }
    //left upper diagonal
    for(int i=row-1,j=col-1;i>=0 and j>=0;i--,j--){
        if(grid[i][j]) return false;
    }
    //right upper diagonal
    for(int i=row-1,j=col+1;i>=0 and j<n;i--,j++){
        if(grid[i][j]) return false;
    }
    return true;
}
void nqueen1(int n,vector<vector<bool>> &grid,int curr_row){
    //base case
    if(curr_row==n){
        qcount++;
        return;
    }
    for(int i=0;i<n;i++){
        if(isItSafe(grid,curr_row,i,n)){
            grid[curr_row][i]=true;
            nqueen1(n,grid,curr_row+1);
            grid[curr_row][i]=false;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int n;
    cin>>n;
    vector<vector<bool>> grid(n,vector<bool>(n,false));
    nqueen1(n,grid,0);
    cout<<qcount;
    return 0;
}
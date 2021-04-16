//1D Dp question
#include<bits/stdc++.h>
using namespace std;
#define vi vector <int>
#define pb push_back


int minCost(vi stones,vi &dp,int n){
    if(n==0){
        return dp[n]=0;
    }
    if(n==1){
        return dp[n]=abs(stones[n]-stones[n-1]);
    }
    if(dp[n]!=-1){
        return dp[n];
    }
   return  dp[n]=min(abs(stones[n]-stones[n-1])+minCost(stones,dp,n-1),abs(stones[n]-stones[n-2])+minCost(stones,dp,n-2));
    
}
int main(){
    int n;
    cin>>n;
    vi stones(n);
    for(int i=0;i<n;i++){
        cin>>stones[i];
    }
    vi dp(n,-1);
    if(n==1){
        cout<<0;
    }
    else if (n==2)
    {
        cout<<stones[1]-stones[0];
    }else{
        cout<<minCost(stones,dp,n-1);    
    }
    

    
    
    return 0;
}
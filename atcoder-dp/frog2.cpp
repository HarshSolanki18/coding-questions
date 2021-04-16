//1D Dp question
#include<bits/stdc++.h>
using namespace std;
#define vi vector <int>
#define pb push_back


int minCost(vi stones,vi &dp,int n,int k){
    if(n==0){
        return dp[n]=0;
    }
    if(dp[n]!=100000){
        return dp[n];
    }
    int result=100000;
    for(int i=1;i<=k;i++){
        if(n-i<0) break;
        int temp=abs(stones[n]-stones[n-i])+minCost(stones,dp,n-i,k);
        
        result=min(result,temp);
        
    }
   return  dp[n]=result;
    
}
int main(){
    int n,k;
    cin>>n>>k;
    vi stones(n);
    for(int i=0;i<n;i++){
        cin>>stones[i];
    }
    vi dp(n,100000);
    if(n==1){
        cout<<0;
    }
    else{
        cout<<minCost(stones,dp,n-1,k);    
    }
    return 0;
}
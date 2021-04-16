//Here we are given a sum and a coins array ,we have to find minimum numbers of coins 
//to make that sum
// coins={1,5,7} sum=11  result=3  {5,5,1}

#include<bits/stdc++.h>
using namespace std;
#define inf 10e8

int minCoins(int sum,int n,int *coins,vector <int> &dp){
    int result=1000000;
    if(sum<0){
        return 1000000;
    }
    if(sum==0) return 0;
    if(dp[sum]!=-1) return dp[sum];
    for(int i=0;i<n;i++){
        int recursionRes=minCoins(sum-coins[i],n,coins,dp);
   if(recursionRes== 1000000){ 
       
    }else{
        result=min(result, 1+recursionRes);
    }
            
    }
    return dp[sum]=result;
}

int main(){
    int n,x;
    cin>>n>>x;
    int *coins=new int[n];
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    vector <int> dp(n+1,-1);
    cout<<minCoins(x,n,coins,dp);
    return 0;
}

//not a  correct solution more work to do
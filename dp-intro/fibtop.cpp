//Fibonacci solution using DP top down approach
//T=O(n)
//S=O(n+n)=O(n)

#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n,vector <int> &dp){
    // base case
    if(n==0 or n==1) return n;
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n]=fibonacci(n-1,dp)+fibonacci(n-2,dp);
    return dp[n];
}

int main(){
    int n;
    cin>>n;
    vector <int> dp(n+1,-1);
    cout<<fibonacci(n,dp)<<endl;
    return 0;
}
//Here we have to reduce the given number to 1 in min no of steps using only these three
//operations 1. Subtract by one
//2. Divide by 2 if it is divisible
//3. Divide by 3 if it is divisible

#include<bits/stdc++.h>
using namespace std;

int reduceToOne(int n,vector <int> &dp){
    int div_by_2=320000,div_by_3=320000,subtract=320000;
    if(n==2 or n==3) return 1;
    if(n==1) return 0;
    if(n<1) return 320000;
    if(dp[n]!=0) return dp[n];
    if(n%2==0){
        div_by_2=1+reduceToOne(n/2,dp);
    }
    if(n%3==0){
        div_by_3=1+reduceToOne(n/3,dp);
    }
    subtract=1+reduceToOne(n-1,dp);
    return dp[n]=min({subtract,div_by_2,div_by_3});
     
}

int main(){
    int n;
    cin>>n;
    vector <int> dp(n+1,0);
    cout<<reduceToOne(n,dp);
    return 0;
}
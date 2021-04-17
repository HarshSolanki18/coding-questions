//At-coder dp contest proble m3 
//problem name c-vacation
#include<bits/stdc++.h>
using namespace std;
#define ll                  long long int
#define vi                  vector <long long int>
#define inf                 1e18
#define mod                 1000000007
#define loop(i,a,b)         for(int i=(a);i<=(b);i++)
#define pb                  push_back
#define vs                  vector <string>
int main(){
    int  n,a,b,c;
    cin>>n;
    int dp[1000][1000];
    
    cin>>a>>b>>c;
    dp[0][0]=a;
    dp[1][0]=b;
    dp[2][0]=c;

    loop(i,1,n-1){
        cin>>a>>b>>c;
                dp[0][i]=a+max(dp[1][i-1],dp[2][i-1]);
                dp[1][i]=b+max(dp[0][i-1],dp[2][i-1]);
                dp[2][i]=c+max(dp[0][i-1],dp[1][i-1]);
    }
    cout<<max({dp[0][n-1],dp[1][n-1],dp[2][n-1]});
    return 0;
}
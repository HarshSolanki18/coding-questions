//Longest Common Subsequence Question Atcoder question f
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
    string s1,s2;
    cin>>s1>>s2;
    ll l1=s1.size();
    ll l2=s2.size();
    vector <vector <ll>> dp(l1+1,vector <ll>(l2+1,0));
    loop(i,1,l1){
        loop(j,1,l2){
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
            
        }
    }
    int ans=dp[l1][l2];
    cout<<"length : "<<ans<<endl;
    int i=l1,j=l2;
    string str(ans,' ');
    while(i>0 and j>0){
        if(s1[i-1]==s2[j-1]){
         str[ans-1]=s1[i-1];
          j--;
          i--;
          ans=ans-1;  
        }else if(dp[i-1][j]>dp[i][j-1]){
            i--;
        }else{
            j--;
        }
    }
    
    loop(i,0,str.size()-1){
        cout<<str[i];
    }
           
    
    return 0;
}
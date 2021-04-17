//very unconventional solution
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
    int  n;
    cin>>n;
    int W;
    cin>>W;
    vector <int> p(n,0),w(n,0) ;
    loop(i,0,n-1){
        cin>>w[i]>>p[i];
        
    }
    vector <int> dp1(W+1,0),dp2(W+1,0);
    
    

    loop(i,0,n-1){
        loop(j,1,W){
            
            if(w[i]>j){
              dp2[j]=dp1[j];
            }
            else{
                       dp2[j]=max({dp2[j],dp1[j],p[i]+dp1[j-w[i]]});
            }
        }
        dp2.swap(dp1);
        dp2.clear();
    }
    cout<<dp1[W];
    return 0;
}
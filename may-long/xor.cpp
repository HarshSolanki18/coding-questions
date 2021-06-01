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
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    ll t;
    ll ans=0;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        loop(i,0,pow(2,n)-1){
            i=i%mod;
            if(i^(i+1)==(i+2)^(i+3)){
                ans=ans%mod+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
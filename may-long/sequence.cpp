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

ll gcd(ll a,ll b){
    if(b==0){
        return a;
    }
    return gcd(a,a%b);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    ll t;
    cin>>t;
    while(t--){
        ll k,sum=0;
        cin>>k;
        vi v;
        
         
        loop(i,1,(2*k)){
            
            sum+=gcd(k+i*i,k+(i+1)*(i+1));
        }
        cout<<sum%mod<<endl;
    }
    return 0;
}
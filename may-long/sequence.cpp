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
    cin>>t;
    while(t--){
        ll k,sum=0;
        cin>>k;
        vi v;
        loop(i,1,(2*k)+1){
            v.pb(k+(i*i));
        }
         
        loop(i,0,(2*k)-1){
            
            sum+=__gcd(v[i],v[i+1]);
        }
        cout<<sum<<endl;
    }
    return 0;
}
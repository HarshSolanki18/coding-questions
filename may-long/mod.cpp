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
        ll n,m;
        cin>>n>>m;
        ll p=0;
        loop(i,1,n-1){
            loop(j,2,n){
                if(i<j){
                    if(((m%i)%j)==((m%j)%i)){
                    p++;
                
                }
                }
                
            }
        }
        cout<<p<<endl;        
    }
    return 0;
}
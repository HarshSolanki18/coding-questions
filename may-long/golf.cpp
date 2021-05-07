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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int t;
    cin>>t;
    while(t--){
        ll n,x,k;
        cin>>n>>x>>k;        
        int c=0;
        if(x>=0 and x<=n+1){
            if(x%k==0){
                c=1;
            }
        }
         if(c!=1){
            if(x>=0 and x<=n+1){
                if((n+1-x)%k==0){
                    c=1;
                }
            }
        }
        if(c==1) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";

    }
    
    return 0;
}
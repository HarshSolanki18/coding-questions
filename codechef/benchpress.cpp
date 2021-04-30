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
    int t;
    cin>>t;
    while(t--){
        ll n,w,wr;
        cin>>n>>w>>wr;
        unordered_map<ll,ll> mp;
        vi v(n);
        loop(i,0,n-1){
            cin>>v[i];
            mp[v[i]]++;
        }
        
        
        if(wr>=w){
            cout<<"YES"<<endl;
        }else{
            int wt=wr;
            loop(i,0,n-1){
                if(mp.find(v[i])!=mp.end()){
                if(mp[v[i]]>=2){
                     
                         wt+=2*v[i];
                         mp[v[i]]=mp[v[i]]-2;
                }                         
                }
                
            }
            if(wt>=w){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
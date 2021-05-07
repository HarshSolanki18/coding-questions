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
        ll n,x,k;
        cin>>n>>x>>k;
        vi fw,bw;
        ll val=0,i=0;
        while(val<n+1){
            val=k*i;
            fw.pb(val);
            i++;
        }
        ll val2=n+1,j=0;
        while(val2>0){
            val2=n+1-j*k;
            bw.pb(val2);
            j++;
        }
        int c=0;
        if(binary_search(fw.begin(),fw.end(),x)){
            c=1;
        }
        loop(i,0,fw.size()-1){
            if(x==fw[i]){
                c=1;
                break;
            }
        }
        if(c!=1){
            loop(i,0,bw.size()-1){
                if(x==bw[i]){
                    c=1;
                    break;
                }
            }
        }
        if(c==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    
    return 0;
}
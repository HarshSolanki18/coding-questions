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
    ll n;
    while(t--){
        cin>>n;
        if(n%2050!=0){
            cout<<-1<<endl;
        }else{
            ll dig=n/2050,sum=0;
        while(dig!=0){
            ll temp;
            sum=sum+dig%10;
            dig=dig/10;
        }
        cout<<sum<<endl;
        }
        
    }
    return 0;
}
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
        int x,a,b;
        cin>>x>>a>>b;
        cout<<(a+((100-x)*b))*10<<endl;
    }
    
    return 0;
}
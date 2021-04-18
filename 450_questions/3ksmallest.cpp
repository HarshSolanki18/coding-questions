//could use heap but doing it in short way 

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
    int n,k;
    cin>>n>>k;
    vi v(n);

    loop(i,0,n-1){
        cin>>v[i];
    }
    
    sort(v.begin(),v.end());

    cout<<v[k-1];
    return 0;
}
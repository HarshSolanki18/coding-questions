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
    int n;
    cin>>n;
    vi v(n);

    loop(i,0,n-1){
        cin>>v[i];
    }
    long long int min=inf,max=-inf;
    loop(i,0,n-1){
        if(v[i]>max) max=v[i];
        if(v[i]<min) min=v[i];
    }
    cout<<"max: "<<max<<" min: "<<min<<endl;
    return 0;
}
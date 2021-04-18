//rotate the elements of array by one
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
    int j=n-1;
    loop(i,0,n-1){
        swap(v[i],v[j]);
    }
    loop(i,0,n-1){
        cout<<v[i]<<" ";
    }
    return 0;
}
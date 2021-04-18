//move all the negative numbers to left sideof array (order is not mattered)

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
    int j=0;
    loop(i,0,n-1){
        if(v[i]<0){
            if(i!=j){
                swap(v[i],v[j]);
                j++;
            }
        }
    }
    loop(i,0,n-1){
        cout<<v[i]<<" ";
    }
    return 0;
}
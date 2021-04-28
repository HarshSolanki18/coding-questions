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
    int n,count=0;
    cin>>n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c>=2) count++;
    }
    cout<<count;
    return 0;
}
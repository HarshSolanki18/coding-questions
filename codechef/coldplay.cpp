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
    int t,m,s;
    cin>>t;
    while(t--){
     cin>>m>>s;
     int c=0;
     while(m>0){
         if(m>=s){
             m=m-s;
             c++;
         }
         if(m<s){
             break;
         }
         
     }
     cout<<c<<endl;
    }
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll                  long long int
#define vi                  vector <long long int>
#define inf                 1e18
#define mod                 1000000007
#define loop(i,a,b)         for(int i=(a);i<=(b);i++)
#define pb                  push_back
#define vs                  vector <string>
#define endl                "\n"

void subset(int i,int n,string &s,string &osf){
    //base case
    if(i==n){
        cout<<"["<<osf<<"]"<<endl;
        return;
    }
    osf=osf+s[i];
    subset(i+1,n,s,osf);
    osf.pop_back();
    subset(i+1,n,s,osf);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    string s;
    cin>>s;
    string osf="";
    subset(0,s.size(),s,osf);
    return 0;
}
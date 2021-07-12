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

void noConsOnes(int n,string osf){
    //base case
     if(n==0){
         cout<<osf<<endl;
         return;
     }

    noConsOnes(n-1,osf+"0");
    if(osf.back()=='1'){

    }else{
        noConsOnes(n-1,osf+"1");
    }
    //self work

    
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int n;
    cin>>n;
    noConsOnes(n," ");
    return 0;
}
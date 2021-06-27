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

int factorial(int n){
    if(n==1){
        return 1;
    }
    int sub=factorial(n-1);
    return n*sub;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int n;
    cin>>n;
    int result=factorial(n);
    cout<<result<<endl;
    return 0;
}
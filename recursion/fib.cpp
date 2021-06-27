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

int fib(int n){
    //base case
    if(n==0 or n==1) return n;

    //recursive assumption
    int sub1=fib(n-1);
    int sub2=fib(n-2);
    //self work
    return sub1+sub2;
    

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int n;
    cin>>n;
    int result=fib(n);
    cout<<result<<endl;
    return 0;
}
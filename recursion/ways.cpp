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


//no of ways to go to party either alone or in pair
int ways(int n){
    //base case
    if(n==1) return 1;

    if(n==2) return 2;

    return ways(n-1)+ways(n-2)*n-1;
}

//find a to the power b
int power(int a,int b){
    //base case
    if(a==1) return b;
    
    //self work
    return power(a-1,b)*b;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int n;
    cin>>n;
    cout<<ways(n);
    cout<<power(5,2);
    return 0;
}
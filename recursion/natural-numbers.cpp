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

void printN(int n){
    //base case
    if(n==0)  return;

    //assumption
     printN(n-1);

    //self work
    cout<<n<<endl;
}

void incdec(int n){
    //base case
    if(n==0) return;
    cout<<n<<" ";    
    //assumption
    incdec(n-1);
    //self work
    cout<<n<<" ";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int n;
    cin>>n;
    printN(n);
    incdec(n);
    return 0;
}
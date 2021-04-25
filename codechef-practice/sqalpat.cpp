#include<bits/stdc++.h>
using namespace std;
#define ll                  long long int
#define vi                  vector <long long int>
#define inf                 1e18
#define mod                 1000000007
#define loop(i,a,b)         for(int i=(a);i<=(b);i++)
#define pb                  push_back
#define vs                  vector <string>
void printF(int n){
    loop(i,n,n+4){
        cout<<i<<" ";
    }
    cout<<endl;
}
void printR(int n){
    for(int i=n;i>n-5;i--){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int ele=n*5,c=0,val=1;
    while(ele){
        if(c==0){
           printF(val);
           val=val+9;
           c=1;
           
        }else{
            printR(val);
            c=0;
            val=val+1;
        
        }
        ele=ele-5;
    }
    return 0;
}
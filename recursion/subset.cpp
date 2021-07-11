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

void subsets(int *arr,int i,int n,string osf){
    if(i==n){
        //i.e at last level we will print subset
        cout<<"[ "<<osf<<" ]\n";
        return;
    }
    subsets(arr,i+1,n,osf+to_string(arr[i])+" ");
    subsets(arr,i+1,n,osf);



}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int n;
    int arr[3]={1,2,3};
    cin>>n;
    subsets(arr,0,3," ");
    return 0;
}
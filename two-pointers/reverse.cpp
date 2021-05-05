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
    int n;
    cin>>n;
    vector<int> v(n,0);
    loop(i,0,n-1){
        cin>>v[i];
    }
    int low=0,high=n-1;
    while(low<high){
        int temp=v[low];
        v[low]=v[high];
        v[high]=temp;
        low++;
        high--;
    }
    loop(i,0,n-1){
        cout<<endl;
        cout<<v[i]<<" ";
    }
    return 0;
}
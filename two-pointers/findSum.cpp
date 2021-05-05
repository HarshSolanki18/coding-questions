#include<bits/stdc++.h>
using namespace std;
#define ll                  long long int
#define vi                  vector <long long int>
#define inf                 1e18
#define mod                 1000000007
#define loop(i,a,b)         for(int i=(a);i<=(b);i++)
#define pb                  push_back
#define vs                  vector <string>

//Find the pair with sum S in sorted array
int main(){
    int n;
    int sum;
    cin>>n;
    cin>>sum;
    vector <int> v(n,0);
    loop(i,0,n-1){
        cin>>v[i];
    }
    int low=0,high=n-1;
    while(low<high){
        if(v[low]+v[high]==sum){
            cout<<v[low]<<" "<<v[high]<<endl;
            return 0;
        }
        else if(v[low]+v[high]>sum){
            high=high-1;
            
        }
        else if(v[low]+v[high]<sum){
            low++;
        
        }
            
            
    }
    cout<<"Not found"<<endl;

    return 0;
}
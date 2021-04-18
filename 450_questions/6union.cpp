//return the count of number of elements in union of two arrays.
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
    int n,m;
    cin>>n>>m;
    vi v1(n),v2(m);

    loop(i,0,n-1){
        cin>>v1[i];
    }
    loop(i,0,m-1){
        cin>>v2[i];
    }
    unordered_set <int> st;
    loop(i,0,n-1){
        st.insert(v1[i]);
    }
    loop(i,0,m-1){
        st.insert(v2[i]);
    }
    cout<<st.size();
    return 0;
}
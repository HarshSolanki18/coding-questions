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
    int t,n;
    ll a,b;
    cin>>t;
    unordered_set <char> st;
    st.insert('E');
    st.insert('Q');
    st.insert('U');
    st.insert('I');
    st.insert('N');
    st.insert('O');
    st.insert('X');
    while(t--){
        cin>>n>>a>>b;
        ll pa=0,pob=0;
        string s;
        loop(i,0,n-1){
            cin>>s;
            if(st.find(s[0])!=st.end()){
                pa+=a;
            
            }else{
              pob+=b;
            }
        }
        
        if(pa>pob){
            cout<<"SARTHAK"<<endl;
        }else if(pa<pob){
            cout<<"ANURADHA"<<endl;
        }else{
            cout<<"DRAW"<<endl;
        }
    }
    return 0;
}
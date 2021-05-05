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
    int T;
    cin>>T;
    while(T--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        unordered_set<char> st;
        int c=0;
        loop(i,0,n-1){
            if(st.find(s[i])!=st.end()){
                c=1;
            
                break;
            }
            if(i<n-1){
                if(s[i]!=s[i+1]){
                st.insert(s[i]);
            }
            }
            
        }
        if(c==1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
        
    }
    
    return 0;
}
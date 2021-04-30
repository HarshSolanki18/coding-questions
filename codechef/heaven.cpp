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
    int t=0,l=0;
    string s;
    cin>>t;
    while(t--){
        cin>>l;
        cin>>s;
        float per=0;
        int c=0;
        loop(i,0,s.size()-1){
            if(s[i]=='1'){
                c++;
            }
        }
        per=c*100/l;
         
        if(per>=50){
            cout<<"YES"<<endl;
        }else{
            per=0;
            c=0;
            if(s.size()>3){
                loop(i,0,s.size()-2){
                if(s[i]=='1'){
                    c++;
                    per=c*100/(i+1);
                }
                if(per>=50){
                    cout<<"YES"<<endl;
                    break;
                }   
            }
            
            }
            if(per<50){
                cout<<"NO"<<endl;
            }
            
            
        }
    }
    
    return 0;
}
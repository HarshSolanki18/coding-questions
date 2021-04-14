//Add two numbers where digits can vary from 1< d <10**6
//in c++ the maximum digitd long long hold is 18 digits
// so here we will take input as string and then store each digit in array
//wiil use macros next time 
#include<bits/stdc++.h>
using namespace std;
vector <long long int> add(vector <long long int> x,vector <long long int> y){
    reverse(x.begin(),x.end());
    reverse(y.begin(),y.end());
    long long int len=min(x.size(),y.size());
    long long int carry=0;
    vector <long long int> ans;

    for(long long int i=0;i<len;i++){
        long long int val=x[i]+y[i]+carry;
        carry=val/10;
        ans.push_back(val%10);

    }
    if(x.size()>len){
             for(long long int i=len;i<x.size();i++){
            long long int val=x[i]+carry;
            carry=val/10;
            ans.push_back(val%10);
        }
    }
    if(y.size()>len){
        for(long long int i=len;i<y.size();i++){
            long long int val=y[i]+carry;
            carry=val/10;
            ans.push_back(val%10);
        }
    }
    while(carry){
    ans.push_back(carry%10);
        carry=carry/10;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main()
{
    string a,b;
    cin>>a>>b;
    vector <long long int> v1,v2,ans;
    for(long int i=0;i<a.size();i++){
        long long int x=a[i]-'0';
        v1.push_back(x);
    }
    for(long int i=0;i<b.size();i++){
        long long int x=b[i]-'0';
        v2.push_back(x);
    }
    ans=add(v1,v2);
    for(long int i=0;i<ans.size();i++){
       cout<<ans[i];
    }
    return 0;
}
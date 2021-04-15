//This is problem where robber has to loot max but he cannot loot the adjacent houses.
//-13132 should be INT_MIN but i didn't remember the syntax.
#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int loothouse(vector <int> arr,vector <int> &dp,int i){
    if(i==0){
        return dp[0]=arr[0];
    }
    if(i==1){
        return dp[1]=max(arr[0],arr[1]);
    }
    if(dp[i]!=-13132){
        return dp[i];
    }
    return dp[i]=max(loothouse(arr,dp,i-1),loothouse(arr,dp,i-2)+arr[i]);
}
int main(){

    int n;
    vector <int> v;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.pb(x);
    }

    vector <int> dp(n,-13132);
    cout<<loothouse(v,dp,n-1);
    return 0;

}
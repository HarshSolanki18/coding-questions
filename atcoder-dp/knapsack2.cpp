//very unconventional solution
//Here constraints are changed W can be 10**9 but profit can be 10**3 so here we will take different approach
//Instead we will find the minimum weight to find the desired profit

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
    ll n,w;
    cin>>n>>w;
    vi val(n,0),wt(n,0);
    loop(i,0,n-1){
        cin>>wt[i]>>val[i];
    }
    vi dp1(n*1000+1);
    vi dp2(n*1000+1);
    loop(i,0,n*1000){
        dp1[i]=inf;
        dp2[i]=inf;
    }
    dp1[0]=0;
    dp1[val[0]]=wt[0];
    loop(i,1,n-1){
        loop(j,1,n*1000){
            if(val[i]>j){
                dp2[j]=dp1[j];
            }else{
                dp2[j]=min({dp2[j],dp1[j],wt[i]+dp1[j-val[i]]});
            }
        }
        loop(k,0,n*1000){
            dp1[k]=dp2[k];
            dp2[k]=inf;
        }

    }
    int result=0;
    loop(i,0,n*1000){
        if(dp1[i]<=w){
            result=i;
        }
    }
    cout<<result;
    return 0;
}
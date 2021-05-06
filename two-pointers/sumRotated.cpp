//Find the pair with given sum in rotated sorted array

#include<bits/stdc++.h>
using namespace std;
#define ll                  long long int
#define vi                  vector <long long int>
#define inf                 1e18
#define mod                 1000000007
#define loop(i,a,b)         for(int i=(a);i<=(b);i++)
#define pb                  push_back
#define vs                  vector <string>

int rotationPoint(vector <int> v,int n,int s,int e){
    if(s>e){
        return -1;
    }
    if(s==e){
        return s;
    }
    int mid=s+(e-s)/2;
    if(e>mid and v[mid]>v[mid+1]){
        return mid;
    }
    if(s>mid and v[mid]<v[mid-1]){
        return mid-1;
    }
    if(v[mid]<=v[s]){
        return rotationPoint(v,n,s,mid-1);
    }
    return rotationPoint(v,n,mid+1,e);
}
int main(){
    int n,sum;
    cin>>n>>sum;
    vector<int> v(n,0);
    loop(i,0,n-1){
        cin>>v[i];
    }

    int rp=rotationPoint(v,n,0,n-1);
    cout<<"Rotation point "<<rp<<endl;
    int min=rp==n-1?0:rp+1;
    int max=rp;
    while(min!=max){
        if(v[min]+v[max]==sum){
            cout<<v[min]<<" "<<v[max];
            return 0;
        }
        else if(v[min]+v[max]<sum){
            min=(min+1)%n;


        }
        else if(v[min]+v[max]>sum){
            max=(max-1+n)%n;
        }

    }
    return 0;
}
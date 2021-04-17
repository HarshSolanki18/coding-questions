#include<bits/stdc++.h>
using namespace std;
#define vi vector <int>
#define pb push_back

void reverseSTL( vi a){
    reverse(a.begin(),a.end());
        for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<"stl"<<endl;
}

void reverseRecursion(vi &arr,int start,int end)
{
  if(start>=end){
      return ;
  }
  int temp=arr[start];
  arr[start] = arr[end];
  arr[end] = temp;
  reverseRecursion(arr,start+1,end-1);

    
}
int main(){
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    cout<<"Enter elements of array"<<endl;
    vi arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverseSTL(arr);
    reverseRecursion(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"recursive";
    return 0;
}
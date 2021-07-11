#include<bits/stdc++.h>
using namespace std;
#define ll                  long long int
#define vi                  vector <long long int>
#define inf                 1e18
#define mod                 1000000007
#define loop(i,a,b)         for(int i=(a);i<=(b);i++)
#define pb                  push_back
#define vs                  vector <string>
#define endl                "\n"

void upperTriangle(int n,int i){
    //base case 
    if(n==0) return;

  /*  for(int i=0;i<n;i++){
        cout<<"* ";
    }
    cout<<endl;
   */
  if(i<n){
      //print column  n=5 i=1
      cout<<"* ";
      upperTriangle(n,i+1);
  }else{
      //change the row
      cout<<endl;
      upperTriangle(n-1,0);
  } 
/*
    //self  work
    upperTriangle(n-1);
    */
}
void printn(int num){
    if(num==0){
        return;
    }
    cout<<"* ";
    printn(num-1);
}
void lowerTriangle(int n,int i){
   if(n==0) return ;
    
   
       printn(i);

   
       cout<<endl;
       lowerTriangle(n-1,i+1);
   
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int n;
    cin>>n;
  //  upperTriangle(n,0);
    lowerTriangle(n,1);
    return 0;
}
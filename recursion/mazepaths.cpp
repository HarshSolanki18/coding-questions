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

int totalPaths=0;

void mazePaths(int i,int j,int n,int m,string osf){
        //base cases
        if(i==n-1 and j==m-1){
            cout<<osf<<endl;
            totalPaths++;
            return;
        }
        if(i>=n or j>=m){
            return;
        }

        //self work
        mazePaths(i,j+1,n,m,osf+"R");
        mazePaths(i+1,j,n,n,osf+"D");
}
//also move diagonally
void mazeDPaths(int i,int j,int n,int m,string osf){
        //base cases
        if(i==n-1 and j==m-1){
            cout<<osf<<endl;
            totalPaths++;
            return;
        }
        if(i>=n or j>=m){
            return;
        }

        //self work
        mazeDPaths(i,j+1,n,m,osf+"R");
        mazeDPaths(i+1,j,n,n,osf+"D");
        mazeDPaths(i+1,j+1,n,m,osf+"I");
}

//dice paths

void dicePaths(int i,int n,string osf){
    //base cases
    if(i>=n){
        return;
    }
    if(i==n-1){
        cout<<osf<<endl;
        totalPaths++;
        return;
    }
    //self work
    for(int j=1;j<=6;j++){
        dicePaths(i+j,n,osf+to_string(j));
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int n;
    cin>>n;
    dicePaths(0,n," ");
    cout<<"total paths: "<<totalPaths<<endl;
    
    return 0;
}
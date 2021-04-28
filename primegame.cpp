#include<bits/stdc++.h>
using namespace std;
#define ll                  long long int
#define vi                  vector <long long int>
#define inf                 1e18
#define mod                 1000000007
#define loop(i,a,b)         for(int i=(a);i<=(b);i++)
#define pb                  push_back
#define vs                  vector <string>

int Diff(int a,int b){
    vector<int> v;
    int i, j;
    // Explicitly handling the cases when a is less than 2
    // since 0 and 1 are not prime numbers
    if (a <= 2) {
        a = 2;
        if (b >= 2) {
            v.pb(a);
            a++;
        }
    }
 
    // MAKING SURE THAT a IS ODD BEFORE WE BEGIN
    // THE LOOP
    if (a % 2 == 0)
        a++;
 
    // NOTE : WE TRAVERSE THROUGH ODD NUMBERS ONLY
    for (i = a; i <= b; i = i + 2) {
 
        bool flag = 1;
        for (j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            v.pb(i);
    }
    if(v.size()<1){
        return -1;
    }
    
    int diff=v.back()-v[0];
    return diff;
}
int main(){
         int a, b,n;
         cin>>n;
         while(n--){
             cin>>a>>b;
             cout<<Diff(a,b)<<endl;
         }
         

 
    
    return 0;
}
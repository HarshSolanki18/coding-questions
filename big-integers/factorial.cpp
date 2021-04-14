//Add two numbers where digits can vary from 1< d <10**6
//in c++ the maximum digitd long long hold is 18 digits
// so here we will take input as string and then store each digit in array
#include<bits/stdc++.h>
using namespace std;

void multiply(vector <long long int> &v,long long int num){
        long long int carry=0;
        for(int i=0;i<v.size();i++){
            
                long long int pro=v[i]*num+carry;
                carry=pro/10;
                v[i]=pro%10;
        }
        while(carry){
            v.push_back(carry%10);
            carry=carry/10;
        }
}

void factorial(long long int a){
    vector <long long int> ans;
    ans.push_back(1);
    for(long long int i=2;i<=a;i++){
        multiply(ans,i);
    }
    reverse(ans.begin(),ans.end());
    for(long long int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
}

int main()
{
    long long int a;
    cin>>a;
    factorial(a);
    return 0;
}
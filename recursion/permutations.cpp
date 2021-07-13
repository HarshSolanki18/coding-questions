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

void permu1(string s,string prm){
    if(s.size()==0){
        //base case
        cout<<prm<<endl;
        return;
    }

    //now
    for(int i=0;i<s.size();i++){
        char ch=s[i];  //current character
        string ros;//rest of string after cutting out ch
        ros=s.substr(0,i)+s.substr(i+1);
        permu1(ros,prm+ch);

    }
}

//now modify function to handle cases like if given string is AAC ,so duplicates can be avoided
void permu(string s,string prm){
    if(s.size()==0){
        //base case
        cout<<prm<<endl;
        return;
    }
    //unordered set store which has already seperated 
    unordered_set<char> st;
    //now
    for(int i=0;i<s.size();i++){
        if(st.count(s[i])==0){
            char ch=s[i];  //current character
        string ros;//rest of string after cutting out ch
        ros=s.substr(0,i)+s.substr(i+1);
        st.insert(ch);
        permu(ros,prm+ch);
        }
        

    }
}
//save space and avoid substr function

//save a lot of space and substr time
//only needs duplicate logic addditon
void perm3(string str,int j){
    if(j==str.size()-1){
        cout<<str<<endl;
        return;
    }
    for(int i=j;i<str.size();i++){
        swap(str[i],str[j]);
        perm3(str,j+1);
        swap(str[i],str[j]);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    string s;
    cin>>s;
    perm3(s,0);
    
    return 0;
}
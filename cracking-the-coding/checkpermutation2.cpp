/******************************************************************************

Given two strings, write a method to decide if one is a permutation of the
other.
*******************************************************************************/

// Two strings of different length cannot be permutation of each other 
//solution 2
//counting how many times each character appears in an string compare those two.
//This will be more optimal solution        O(s1+s2) 
#include <bits/stdc++.h>

using namespace std;


int main()
{
    string s1="dog",s2="gad";
    int letters[128]={0};  //ASCII encoding
    if(s1.length()!=s2.length()){
        cout<<"no";
        return 0;
    }
    
    for(int i=0;i<s1.length();i++){
        letters[s1[i]]++;
    }
    for(int i=0;i<s2.length();i++){ 
        letters[s2[i]]--;
        if(letters[s2[i]]<0){
            cout<<"no2";
            return 0;
        }
    }
    
    cout<<"yes";
    return 0;
}


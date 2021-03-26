/******************************************************************************

Given two strings, write a method to decide if one is a permutation of the
other.
*******************************************************************************/

// Two strings of different length cannot be permutation of each other 

#include <bits/stdc++.h>

using namespace std;


int main()
{
    string s1="dog",s2="god",s3="adfaf";
    if(s1.length()!=s2.length()){
        cout<<"no1";
        return 0;
    }
    sort(s2.begin(),s2.end());    //sort both the strings and then compare
    sort(s1.begin(),s1.end());
    if((s1.compare(s2))==0){
        cout<<"yes1";
    }else{
        cout<<"no2";
    }



    return 0;
}


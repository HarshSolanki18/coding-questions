#include <bits/stdc++.h>

using namespace std;

bool isUniqueChars(string s){
    if(s.length()>128){     //there are only 128  unique characters
        return false;
    }
    bool char_set[128]={false};  //important to initialize with false,garbage possibility
    for(int i=0;i<s.length();i++){
        int val=s[i];
        if(char_set[val]){  //already found this character
            return false;
        }
        char_set[val]=true;
    }
    return true;
}

int main()
{
    string s1="adsbdFSF";
    string s2="ADFCGRaerv";
    cout<<isUniqueChars(s1);
    cout<<isUniqueChars(s2);
    return 0;
}
//time complexity is 0(n) n is length of string
// space complexity is 0(1)

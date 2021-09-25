#include<bits/stdc++.h>
using namespace std;

void bubble_sort(vector <int> &v,int n){
    
    for(int i=0;i<n-1;i++){
        bool is_swapped=false;
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1]){
                std:swap(v[j],v[j+1]);
                is_swapped=true;
            }
        }
        if(not is_swapped){
            break;
        }
    }
}
void display(vector <int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter elements: ";
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    bubble_sort(v,n);
    display(v);
    return 0;
}
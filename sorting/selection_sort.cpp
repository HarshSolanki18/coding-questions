#include<bits/stdc++.h>
using namespace std;

int findmin(vector <int> &v,int start){
    int min=start;
    int i=start+1;
    while(i<v.size()){
        if(v[i]<v[min]){
            min=i;
        }
        i++;
    }
    return min;
}
 int main(){
     int n;
     printf("Enter size of array:\n");
     cin>>n;
     cout<<"Enter elements"<<endl;
     vector <int> v(n,0);
     for(int i=0;i<n;i++){
         cin>>v[i];
        
     }
     //selection sort
     for(int i=0;i<n;i++){
         int min=findmin(v,i);
         std:swap(v[i],v[min]);
     }
     
     //display elements
     for(int i=0;i<n;i++){
         cout<<" "<<v[i];
     }
     return 0;
 }
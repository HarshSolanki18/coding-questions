#include<bits/stdc++.h>
using namespace std;
int maxenergy(int reactCapacity,int criticalMass,vector<int> vol,vector<int> mass,vector<int> power){
    int answer;
    int totalMass=0,totalVolume=0;
    answer=0;
    vector<pair<int,int>> vp;
    for(int i=0;i<power.size();i++){
        vp.push_back(make_pair(power[i],i));
    }
    
    sort(power.begin(),power.end(),greater<int>());


    for(int i=0;i<vol.size();i++){
        int index;
         for(int j=0;j<vol.size();j++){
             if(vp[j].first==power[i]){
                 index=vp[j].second;
             }
         }
               
        if(mass[index]+totalMass<=criticalMass and vol[index]+totalVolume<=reactCapacity){
           answer=answer+power[i];
           totalMass+=mass[index];
           totalVolume+=vol[index]; 
        }
    }
    return answer;
}

int main(){
    int cap;
    cin>>cap;
    int mass;
    cin>>mass;
    int numVolumes,numMasses,numEnergies;
    cin>>numVolumes;
    vector<int> v;
    vector<int> m;
    vector<int> e;
    for(int i=0;i<numVolumes;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
     
    cin>>numMasses;
    for(int i=0;i<numMasses;i++){
        int x;
        cin>>x;
        m.push_back(x);
    }
    cin>>numEnergies;
    for(int i=0;i<numEnergies;i++){
        int x;
        cin>>x;
        e.push_back(x);
    }
    cout<<maxenergy(cap,mass,v,m,e);
    return 0;


}
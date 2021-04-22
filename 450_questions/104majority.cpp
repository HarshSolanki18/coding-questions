     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
        unordered_map <int,int> mp;
        for(int i=0;i<size;i++){
            mp[a[i]]++;
        }
        
        for(auto x:mp){
            if(x.second>size/2){
                return x.first;
            }
            
        }
        return -1;
    }
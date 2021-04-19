vector<int> find(int arr[], int n , int x )
{
    // code here
    vector <int> v;
    if(binary_search(arr,arr+n,x)){
        v.push_back((lower_bound(arr,arr+n,x)-arr));
    v.push_back((upper_bound(arr,arr+n,x)-arr)-1);    
    }else{
        v.push_back(-1);
        v.push_back(-1);
    }
    
    return v;
}
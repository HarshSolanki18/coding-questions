void sort012(int a[], int n)
{
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(a[mid]==0){
            int temp=a[low];
            a[low]=a[mid];
            a[mid]=temp;
            low=low+1;
            mid=mid+1;
        }else if(a[mid]==2){
            int temp=a[high];
            a[high]=a[mid];
            a[mid]=temp;
            high=high-1;
            
            
        }else{
            mid=mid+1;
        }
    }
}
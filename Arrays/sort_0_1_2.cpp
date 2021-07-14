/*

		You are given an array of 0s and 1s in random order. Segregate 0s on left side and 1s on right side of the array. Traverse array only once. 

*/
int main()
{
    int arr[]={1,0,0,1,2,1,0,2,2,0,1,1,1,0,0,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    int l=0,m=0,h=size-1;
    
    while(h>m){
        if(arr[m]==0){
            int temp=arr[l];
            arr[l]=arr[m];
            arr[m]=temp;
            m++;
            l++;
        }
        else if(arr[m]==1){
            m++;
        }
        else{
            int temp=arr[h];
            arr[h]=arr[m];
            arr[m]=temp;
            h--;
        }
    }
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}

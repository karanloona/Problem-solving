int search(int* arr, int n, int key)
{
    int l=0;
    int h=n-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[l]<=arr[mid]){
            // low to mid is sorted
            if(key>=arr[l] && key<arr[mid]){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        else if(arr[mid]<=arr[h]){
            // mid to high part is sorted
            if(key>arr[mid] && arr[h]>=key){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
    }
    return -1;
}
/*
    Merge Sort is a Divide and Conquer algorithm. It divides the input array into two halves, calls itself for the two halves, and then merges the two sorted halves. The merge() function is used for merging two halves. The merge(arr, l, m, r) is a key process that assumes that arr[l..m] and arr[m+1..r] are sorted and merges the two sorted sub-arrays into one.

*/


#include <iostream>
using namespace std;
void merge(int arr[], int l, int mid, int h){
    int leftSize=mid-l+1;
    int rightSize=h-mid;
    
    int leftArray[leftSize],rightArray[rightSize];
    
    for(int i=0; i<leftSize; i++){
        leftArray[i]=arr[i+l];
    }
    
    for(int i=0; i<rightSize; i++){
        rightArray[i]=arr[mid+i+1];
    }
    
    int left=0,right=0,temp=l;
    while(left<leftSize && right<rightSize){
        if(leftArray[left]>rightArray[right]){
            arr[temp]=rightArray[right];
            right++;
            temp++;
        }
        else{
            arr[temp]=leftArray[left];
            left++;
            temp++;
        }
    }
    
    while(left<leftSize){
        arr[temp]=leftArray[left];
        left++;
        temp++;
    }
    
    while(right<rightSize){
        arr[temp]=rightArray[right];
        right++;
        temp++;
    }
}
void mergeSort(int arr[], int l, int h){
    if(l>=h){
        return;
    }
    int mid=(l+h)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,h);
    merge(arr,l,mid,h);
}
int main()
{
    int arr[]={9,8,7,6,5,4,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,size-1);
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}
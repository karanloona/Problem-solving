/* 

	QuickSort is a Divide and Conquer algorithm. It picks an element as pivot and partitions the given array around the picked pivot.

*/




#include<iostream>
using namespace std;
void swap(int arr[], int i, int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int partition(int arr[], int l, int h){
    int pivot=arr[h];
    int i=l-1;
    for(int j=l; j<h; j++){
        if(pivot>arr[j]){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,h);
    return i+1;
}
void quickSort(int arr[], int l, int h){
    if(h>l){
        int pti=partition(arr,l,h);
        quickSort(arr,l,pti-1);
        quickSort(arr,pti+1,h);
    }
}
int main(){
    int arr[]={2,45,21,57,98,54,23,45,55,32};
    int size=sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,size-1);
    for(int i:arr){
        cout<<i<<" ";
    }
}
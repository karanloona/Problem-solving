/*

	You are given a sorted array 'ARR' and a number 'X'. Your task is to count the number of occurrences of 'X' in 'ARR'.
	Note :
		1. If 'X' is not found in the array, return 0.
		2. The given array is sorted in non-decreasing order.

*/
int countOccurrences(vector < int > arr, int x) {
    // Write your code here.
    int size=arr.size();
    int left=0,right=size-1;
    int count=0;
    while(left<=right){
        int mid=(left+right)/2;
        if(arr[mid]==x){
            count++;
            int temp=mid;
            while(mid>0 && arr[mid-1]==x){
                count++;
                mid--;
            }
            mid=temp;
            while(mid<right && arr[mid+1]==x){
                count++;
                mid++;
            }
            return count;
        }
        else if(arr[mid]>x){
            right=mid-1;
        }
        else if(arr[mid]<x){
            left=mid+1;
        }
    }
    return count;
}
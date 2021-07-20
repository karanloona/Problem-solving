/*


		You are given an array of integers of length N, find the first missing positive integer in linear time and constant space. In other words, find the lowest positive integer that does not exist in the array. The array can negative numbers as well.
		For example, the input [3, 4, -1, 1] should give output 2 because it is the smallest positive number that is missing in the input array.

*/


#include<bits/stdc++.h>

int firstMissing(int arr[], int n)
{
    sort(arr,arr+n);
    int k=0;
    while(arr[k]<0){
        k++;
    }
    if(arr[k]!=0 && arr[k]!=1){
        return 1;
    }
    for(int i=k; i<n-1; i++){
        if(arr[i]+1!=arr[i+1]){
            return arr[i]+1;
        }
    }
    return arr[n-1]+1;
}

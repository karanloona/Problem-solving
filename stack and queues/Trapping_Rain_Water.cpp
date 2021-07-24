/*

	You have been given an integer array/list (ARR) of size N. It represents an elevation map wherein ARR[i] denotes the elevation of the ith bar. Write a function which returns the total amount of rainwater that can be trapped in these elevations.
	Note :
	The width of each bar is the same and is equal to 1.

*/


#include<bits/stdc++.h>
long getTrappedWater(long *arr, int n)
{
    if(n==0){
            return 0;
        }
        vector<long> left;
        vector<long> right;
        long max=0;
        left.push_back(arr[0]);
        for(int i=1; i<n; i++){
            if(arr[i]>left.back()){
                left.push_back(arr[i]);
            }
            else{
                left.push_back(left.back());
            }
        }
        right.push_back(arr[n-1]);
        for(int i=n-2; i>=0; i--){
            if(arr[i]>right.back()){
                right.push_back(arr[i]);
            }
            else{
                right.push_back(right.back());
            }
        }
        reverse(right.begin(),right.end());
        for(int i=0; i<n; i++){
            max +=min(right[i],left[i])-arr[i];
        }
        return max;
}
/*

	You are given an array 'ARR' of the 'N' element. Your task is to find the maximum difference between any of the two elements from 'ARR'.
	If the maximum difference is even print “EVEN” without quotes. If the maximum difference is odd print “ODD” without quotes.

	For example:
		Given 'ARR' = [1, 10, 5, 2, 8, 1 ] , answer is "ODD".
		Here the maximum difference is between 10 and 1, 10 - 1 = 9


*/

#include<bits/stdc++.h>
string maximumDifference(int n, vector<int>& arr)
{
    string ans="";
	int min=arr[0];
    int max=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    if((max-min)%2==0){
        ans="EVEN";
    }
    else{
        ans="ODD";
    }
    return ans;
}
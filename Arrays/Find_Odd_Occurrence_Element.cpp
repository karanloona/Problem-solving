/*


	You are given an array of 'N' elements. In this given array, each element appears an even number of times except one element which appears odd no. of times. Your task is to find the element which occurs an odd number of times.
	For Example :
		Input array [5,5,6,4,6],If we look at the frequency of different elements in this array.We can see,4 appears an odd number of times, so our answer will be 4.

*/


#include<unordered_map>
int findOdd(int * arr,int n)
{
    unordered_map<int,int> m;
    for(int i=0; i<n; i++){
        m[arr[i]]++;
    }
    for(auto a:m){
        if(a.second%2!=0){
            return a.first;
        }
    }
}


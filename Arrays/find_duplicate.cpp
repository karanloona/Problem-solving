/*
	You have been given an integer array/list(ARR) of size N which contains numbers from 0 to (N - 2). Each number is present at least once. That is, if N = 5, the array/list constitutes values ranging from 0 to 3 and among these, there is a single integer value that is present twice. You need to find and return that duplicate number present in the array.



*/

#include<tr1/unordered_map>
using namespace std::tr1;

int duplicateNumber(int *arr, int size)
{
    // O(N^2)
    
    /*
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(i==j){
                continue;
            }
            if(arr[i]==arr[j]){
                return arr[i];
            }
        }
    }
    */
    
    // O(N)
    
    unordered_map<int, int> m;
    for(int i=0; i<size; i++){
        m[arr[i]]++;
    }
    int ans=-1;
    for(int i=0; i<size; i++){
        if(m[arr[i]]==2){
            ans=arr[i];
            break;
        }
    }
    return ans;
}
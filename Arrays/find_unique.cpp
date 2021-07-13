/*

	You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
	Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
	You need to find and return that number which is unique in the array/list.


*/



#include <unordered_map>

int findUnique(int *arr, int size)
{
    // ON^2
    
    /*for(int i=0; i<size; i++){
        bool find=false;
        for(int j=0; j<size; j++){
            if(i==j){
                continue;
            }
            if(arr[i]==arr[j]){
                find=true;
            }
        }
        if(find==false){
            return arr[i];
        }
    }
    */
    
    // O(N)
    unordered_map<int,int> m;
    for(int i=0; i<size; i++){
        m[arr[i]]++;
    }
    int ans=-1;
    for(int i=0; i<size; i++){
        if(m[arr[i]]==1){
            ans=arr[i];
        	break;
        }
    }
    return ans;
}
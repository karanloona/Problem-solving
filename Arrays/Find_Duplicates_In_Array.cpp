/*

	You are given an array/list 'ARR' consisting of N integers, which contains elements only in the range 0 to N - 1. Some of the elements may be repeated in 'ARR'. Your task is to find all such duplicate elements.
	Note:
		1. All the elements are in the range 0 to N - 1.
		2. The elements may not be in sorted order.
		3. You can return the duplicate elements in any order.
		4. If there are no duplicates present then return an empty array.

*/


#include<unordered_map>
vector < int > findDuplicates(vector < int > & arr, int n) {
    vector<int> ans;
    unordered_map<int, int> m;
    sort(arr.begin(), arr.end());
    for(int i=0; i<n-1; i++){
        if(arr[i]==arr[i+1] && m[arr[i]]==0){
            ans.push_back(arr[i]);
        }
        m[arr[i]]++;
    }
    return ans;
}
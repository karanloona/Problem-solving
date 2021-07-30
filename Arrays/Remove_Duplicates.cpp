/*

	Ninja is playing with numbers but hates when he gets duplicate numbers. Ninja is provided an array, and he wants to remove all duplicate elements and return the array, but he has to maintain the order in which the elements were supplied to him.

*/

#include<bits/stdc++.h>
vector<int> removeDuplicates(vector<int> arr) {
    unordered_map<int,int> m;
    vector<int> ans;
    for(int i=0; i<arr.size(); i++){
        if(m[arr[i]]==0){
            ans.push_back(arr[i]);
        }
        m[arr[i]]++;
    }
    return ans;
}

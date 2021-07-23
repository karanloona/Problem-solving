/*

	For a given array/list of integers of size N, print the Next Greater Element(NGE) for every element. The Next Greater Element for an element X is the first element on the right side of X in the array, which is greater than X. If no greater elements exist to the right of X, consider the next greater element as -1.
	For Example:

		For the given array [7, 12, 1, 20]
		- The next greater element for 7 is 12.
		- The next greater element for 12 is 20. 
		- The next greater element for 1 is 20. 
		- There is no greater element for 20 on the right side.

		Output: [12, 20, 20, -1]
*/


#include<bits/stdc++.h>

vector<int> nextGreaterElement(vector<int>& arr, int n)
{
    vector<int> ans;
    stack<int> s;
    
    for(int i=n-1; i>=0; i--){
        if(s.empty()){
            ans.push_back(-1);
            s.push(arr[i]);
        }
        else{
            if(arr[i]<s.top()){
                ans.push_back(s.top());
                s.push(arr[i]);
            }
            else{
                while(!s.empty() && s.top()<=arr[i]){
                    s.pop();
                }
                if(s.empty()){
                    ans.push_back(-1);
                }
                else{
                    ans.push_back(s.top());
                }
                s.push(arr[i]);
            }
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
/*

	You’re given an array of ‘N’ integers. Your task is to find all those array elements which contain 1, 2, and 3 in their digits and then print them in ascending order. If no element has 1,2 and 3 in its digits, then print ‘-1’.
	Example :
		12345 satisfies the condition since it has all ‘1’, ‘2’, and ‘3’ in its digits, but 124 doesn’t satisfy the condition since it only has ‘1’ and ‘2’ but not ‘3’ in its digits.


*/

#include<bits/stdc++.h>
bool helper(int n){
    bool one=false,two=false,three=false;
    while(n>0){
        int temp=n%10;
        if(temp==1 && one==false){
            one=true;
        }
       	if(temp==2 && two==false){
            two=true;
        }
        if(temp==3 && three==false){
            three=true;
        }
        n=n/10;
    }
    if(one && two && three){
        return true;
    }
    else{
        return false;
    }
}
vector<int> containsNumber(int n, vector<int> &arr)
{
    vector<int> ans;
	if(n==0){
        return ans;
    }
    for(int i=0; i<n; i++){
        if(helper(arr[i])){
            ans.push_back(arr[i]);
        }
    }
    if(ans.size()>0){
        sort(ans.begin(), ans.end());
    }
    else{
        ans.push_back(-1);
    }
    return ans;
}
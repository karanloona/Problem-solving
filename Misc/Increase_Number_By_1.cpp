/*

	You are given an array of integers NUM consisting of N elements. This array represents the digits of a number. Your task is to increase the number by 1, or we can say you have to add 1 to this number. The number will be positive, and digits are stored so that the most significant digit is at the starting of the array.
		For example:
			Let input array is [1,3,2,7] so basically, this array represents the number 1327, the output will be [1,3,2,8].
		Note:
			The input may have 0 at the starting of the array, e.g., [0,3,5,7] is a valid input, but the output can not have 0 before the most significant digit. So [0,3,5,8] will be a wrong answer, and the correct answer will be [3,5,8].

*/

#include<bits/stdc++.h>
vector<int> addOne(vector<int>&nums)
{
    vector<int> ans;
    int i=0;
   	bool check=true;
    while(check && i<nums.size()){
        if(nums[i]!=0){
            check=false;
            break;
        }
        i++;
    }
    vector<int> temp;
    
    for(int j=i; j<nums.size(); j++){
        temp.push_back(nums[j]);
    }
    if(temp.size()==0){
        return ans;
    }
    int carry=1;
    reverse(temp.begin(),temp.end());
    for(int k=0; k<temp.size(); k++){
        int sum=temp[k]+carry;
        if(sum>9){
            carry=1;
            sum=sum%10;
        }
        else{
            carry=0;
        }
        ans.push_back(sum);
    }
    if(carry>0){
        ans.push_back(carry);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
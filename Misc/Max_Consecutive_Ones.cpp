/*

	Given a binary array nums, return the maximum number of consecutive 1's in the array.
	
	Input: nums = [1,1,0,1,1,1]
	Output: 3
	Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.

*/


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0;
        int i=0;
        while(i<nums.size()){
            int count=0;
            while(i<nums.size() && nums[i]==1){
                i++;
                count++;
            }
            if(count>max){
                max=count;
            }
            i++;
        }
        return max;
    }
};
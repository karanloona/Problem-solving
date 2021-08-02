/*

	Given a positive integer num, write a function which returns True if num is a perfect square else False.
	
	Follow up: Do not use any built-in library function such as sqrt.

	Input: num = 16
	Output: true

*/

class Solution {
public:
    bool isPerfectSquare(int num) {
        bool ans=false;
        if(num==1){
            return true;
        }
        long long int i=1,ma=1;
        while(ma<num){
            i++;
            ma=i*i;
            if(ma==num){
                return true;
            }
            
        }
        
        return ans;
    }
};



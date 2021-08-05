/*

	Given a string check if it is Pangram or not. A pangram is a sentence containing every letter in the English Alphabet.


	Input:
	S = Bawds jog, flick quartz, vex nymph
	Output: 1
	Explantion: In the given input, there
	are all the letters of the English
	alphabet. Hence, the output is 1


*/

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string &str) {
        bool ans=true;
        
        int arr[27]={0};
        for(int i=0; i<str.length(); i++){
            int c=tolower(str[i])-'a';
            arr[c]=1;
        }
        for(int i=0; i<26; i++){
            if(arr[i]==0){
                return false;
            }
        }
        return ans;
    }

};
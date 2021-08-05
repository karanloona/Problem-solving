/*

	Given a string S, the task is to create a string with the first letter of every word in the string.
	Example 1:

	Input: 
	S = "geeks for geeks"
	Output: gfg

*/

#include<bits/stdc++.h>
class Solution{
public:	
	
	string firstAlphabet(string S)
	{
	    string ans="";
	    bool v=true;
	    for(int i=0; i<S.length(); i++){
	        if(S[i]==' '){
	            v=true;
	        }
	        else if(S[i]!=' ' && v==true){
	            ans.push_back(S[i]);
	            v=false;
	        }
	    }
	    return ans;
	}
};
/*

	Given an expression string x. Examine whether the pairs and the orders of “{“,”}”,”(“,”)”,”[“,”]” are correct in exp.
	For example, the function should return 'true' for exp = “[()]{}{[()()]()}” and 'false' for exp = “[(])”.

	Example 1:
	Input:
		{([])}
	Output: 
		true
	
	Explanation: 
		{ ( [ ] ) }. Same colored brackets can form 
		balaced pairs, with 0 number of 
		unbalanced bracket.

*/

#include<bits/stdc++.h>
class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> s;
        for(int i=0; i<x.length(); i++){
            if(x[i]=='}'){
                if(!s.empty() && s.top()=='{'){
                    s.pop();
                }
                else{
                    return false;
                }
            }
            else if(x[i]==')'){
                if(!s.empty() && s.top()=='('){
                    s.pop();
                }
                else{
                    return false;
                }
            }
            else if(x[i]==']'){
                if(!s.empty() && s.top()=='['){
                    s.pop();
                }
                else{
                    return false;
                }
            }
            else{
                s.push(x[i]);
            }
        }
        if(s.empty()){
            return true;
        }
        else{
            return false;
        }
    }

};

	/*
	
		Given a string of length N, made up of only uppercase characters 'R' and 'G', where 'R' stands for Red and 'G' stands for Green.Find out the minimum number of characters you need to change to make the whole string of the same colour.

		Input:
		N=7
		S="GGGGGGR"
		Output:
		1
		Explanation:
		We need to change only the last 
		character to 'G' to make the string 
		same-coloured.


	*/

#include<bits/stdc++.h>
class Solution {
  public:
       int RedOrGreen(int N,string S) {
           int red=0,green=0;
           for(int i=0; i<N; i++){
               S[i]=='R'?red++:green++;
           }
           return min(red,green);
    }
};
/*

	You are given a string 'S'. Your task is to check whether the string is palindrome or not. For checking palindrome, consider alphabets and numbers only and ignore the symbols and whitespaces.
	Note:
		String 'S' is NOT case sensitive.

	Example :
		Let S = “c1 O$d@eeD o1c”.
		If we ignore the special characters, whitespaces and convert all uppercase letters to lowercase, we get S = “c1odeedo1c”, which is a palindrome. Hence, the given string is also a palindrome.

*/

#include <bits/stdc++.h>
bool checkPalindrome(string s)
{
    int i=0,j=s.length()-1;
    while(j>=i){
        while((s[j]==' ' || !isalnum(s[j])) && j>i){
            j--;
        }
        while((s[i]==' ' || !isalnum(s[i])) && j>i){
            i++;
        }
        if(tolower(s[i])!=tolower(s[j])){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
/*

	You have been given an integer 'N'. Your task is to return true if it is a power of two. Otherwise, return false.
	An integer 'N' is a power of two, if it can be expressed as 2 ^ 'K' where 'K' is an integer.

*/

#include<bits/stdc++.h>
bool helper(int n){
    if(n==0){
        return false;
    }
    while(n!=1){
        if(n%2!=0){
            return false;
        }
        n=n/2;
    }
    return true;
}
bool isPowerOfTwo(int n)
{
    if(n==1){
        return true;
    }
    return helper(n);
}
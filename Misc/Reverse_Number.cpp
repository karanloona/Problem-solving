/*

	Ninja is feeling very bored and wants to try something new. So, he decides to find the reverse of a given number. But he cannot do it on his own and needs your help.
	Note:
		If a number has trailing zeros, then its reverse will not include them. For e.g., the reverse of 10400 will be 401 instead of 00401.

*/
long long int reverseNumber(long long int n)
{
    long long int ans=0,remainder=0;
	while(n!=0){
        remainder=n%10;
        ans=ans*10+remainder;
        n=n/10;
    }
    return ans;
}

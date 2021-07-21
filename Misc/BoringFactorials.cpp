/*

	You are given an integer ‘N’ and a prime number ‘P’. Your task is to find the N! modulo P.


*/

int boringFactorials(int n, int p)
{
    int ans=1;
    for(int i=1; i<=n; i++){
        ans = (ans * i) % p;
    }
    return ans;
}
/*

	You are given an integer āNā and a prime number āPā. Your task is to find the N! modulo P.


*/

int boringFactorials(int n, int p)
{
    int ans=1;
    for(int i=1; i<=n; i++){
        ans = (ans * i) % p;
    }
    return ans;
}
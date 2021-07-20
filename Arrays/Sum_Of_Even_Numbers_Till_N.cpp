/*

	You have been given a number 'N', print sum of all even numbers from 1 to 'N' (both inclusive).

*/


long long evenSumTillN(int n) {
    long long ans=0;
    for(int i=1; i<=n; i++){
        if(i%2==0){
            ans +=i;
        }
    }
    return ans;
}
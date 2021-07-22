/*

	You have been given a sorted array/list of integers of size N and an integer X. Find the total number of occurrences of X in the array/list.


*/
int countOccurences(int arr[], int n, int X)
{
	int  ans=0;
    for(int i=0; i<n; i++){
        if(arr[i]==X){
            ans++;
        }
    }
    return ans;
}
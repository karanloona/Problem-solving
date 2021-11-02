/*

	You are given an array ‘ARR’ of size N. You have to construct a Product Array ‘P’ of the same size such that P[i] is equal to the product of all the elements of ARR except ARR[i]. The constraint is that you are not allowed to use the division operator.
	
	For Example:
	For an array {1, 2, 3, 4, 5}:
	The required product array generated from the given array is {120, 60, 40, 30, 24 }

	This can be generated in the following manner:

	For generating 120 we have 2 * 3 * 4 * 5 i.e. the product of other array elements except 1.
	For generating 60 we have 1 * 3 * 4 * 5  i.e. the product of other array elements except 2.
	For generating 40 we have 1 * 2 * 4 * 5  i.e. the product of other array elements except 3.
	For generating 30 we have 1 * 2 * 3 * 5  i.e. the product of other array elements except 4.
	For generating 24 we have 1 * 2 * 3 * 4  i.e. the product of other array elements except 5.


*/

vector<long long> getProductArray(int arr[], int n)
{
   // Write your code here.
    long long ans=1;
    for(int i=0; i<n; i++){
        ans *=arr[i];
    }
    vector<long long> result;
    if(n==1){
        result.push_back(0);
        return result;
    }
    for(int i=0; i<n; i++){
        long long temp=ans/arr[i];
        result.push_back(temp);
    }
    return result;
}
/*
	You have been given an array/list(ARR) of size N. You need to swap every pair of alternate elements in the array/list.
	You don't need to print or return anything, just change in the input array itself.
*/

void swapAlternate(int *arr, int size)
{
	for(int i=0; i<size-1; i+=2){
			int temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
	}   
}
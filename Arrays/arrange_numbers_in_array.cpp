/* 
	problem statement:

		You have been given an empty array(ARR) and its size N. The only input taken from the user will be N and you need not worry about the array.
		Your task is to populate the array using the integer values in the range 1 to N(both inclusive) in the order - 1,3,.......4,2.


*/


void arrange(int *arr, int n)
{
	int k=0,i;
	for(i=0; i<n; i=i+2){
		arr[k]=i+1;
		k++;
	}
	if(n%2!=0){
		i=i-2;
	}
	while(i>0){
		arr[k]=i;
		k++;
		i=i-2;    
	}
}	
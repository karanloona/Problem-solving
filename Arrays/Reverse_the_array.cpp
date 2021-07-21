/*

	Given an array with N elements, the task is to reverse all the array elements and print the reversed array.

*/

#include <iostream>
using namespace std;

int main() {
    //Write your code here
	int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=n-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}
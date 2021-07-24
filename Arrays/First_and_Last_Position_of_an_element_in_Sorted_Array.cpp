/*

	You are given a sorted array ARR consisting of N integers and an integer X. You need to find the first and last position of occurrence of X in the array.
	Note:
	1. The array follows 0-based indexing, so you need to return 0-based indices.
	2. If X is not present in the array, return “-1 -1”.
	3. If X is only present once in the array, the first and last position of its occurrence will be the same.

	Follow Up:
	Try to solve the problem in O(log(N)) time complexity.

*/

pair<int, int> findFirstLastPosition(vector<int> &arr, int n, int x)
{
	int low=0,high=n-1,first=-1,last=-1;
    pair<int,int> ans;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            first=mid;
            high=mid-1;
        }
        else if(arr[mid]>x){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    
    low=0,high=n-1;
    
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            last=mid;
            low=mid+1;
        }
        else if(arr[mid]>x){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    ans.first=first;
    ans.second=last;
    
    return ans;
}


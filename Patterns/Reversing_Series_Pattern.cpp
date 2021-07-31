/*

	You are given an integer ‘N’. Your task is to return a reverse series pattern for the given ‘N’.
	The reverse series pattern for ‘N’ = 5 will look like following:

		1 
		3 2 
		4 5 6 
		10 9 8 7 
		11 12 13 14 15

*/


vector<vector<int>> reversePattern(int n) {
   	vector<vector<int>> ans;
    int i=1;
    int k=1;
    while(i<=n){
        int j=1;
        vector<int> temp;
        if(i%2==0){
            k=k+i-1;
        }
        while(j<=i){
            if(i%2==0){
                temp.push_back(k);
                k--;
            }
            else{
                temp.push_back(k);
                k++;
            }
            j++;
        }
        if(i%2==0){
            k=k+i+1;
        }
		ans.push_back(temp);
        i++;
    }
    return ans;
}

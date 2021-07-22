/*

	As a part of its competition, the school will conduct a codeathon, Lock the Code, where it has been given a value, and the participants have to decode it.
	The participants are given a value denoting the number of rows in the matrix; they need to print the pattern.

	Example : 
		For N=5, Pattern:
		E
		DE
		CDE
		BCDE
		ABCDE

	Among the participants, Ninja is new to programming and doesn’t have much experience; he asks you to solve the problem. Can you help solve this problem?
*/

vector<vector<char>> interestingPattern(int n)
{
    vector<vector<char>> ans;
   	if(n<1){
        return ans;
    }
    int i=1;
    while(i<=n){
        int j=1;
        vector<char> temp;
        int k=n-i+1;
        while(j<=i){
            char c=64+k;
            temp.push_back(c);
            k++;
            j++;
        }
        ans.push_back(temp);
        i++;
    }
    return ans;
}

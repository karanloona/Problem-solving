/*

	Ninja wants to build a number pattern for the given integer.
	For example, If the given integer ‘N’ is 4 

	Pattern:

	1
	23
	345
	4567

*/

vector<string> numberPattern(int n)
{
    vector<string> ans;
	int i=1;
    while(i<=n){
        int j=1;
        int k=i;
        string temp="";
        while(j<=i){
			temp +=to_string(k);
            j++;
			k++;
        }
       ans.push_back(temp);
        i++;
    }
    return ans;
}

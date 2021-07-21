/*

	You are given an integer ‘N’. Your task is to print a pattern with the following description
	1.The pattern will consist of 2 * ‘N’ - 1 lines.
	2.The pattern will consist of ‘ ‘ (space) and ‘*’ characters only.
	3.The pattern will be an arrow pattern.
	4.An arrow pattern starts with 1 ‘*’ character and increases length till ‘N’ ‘*’ and then decreases it till 1 ‘*’ and each line will consist of the same number of ‘ ‘ and ‘*’ characters. 
	5.For a better understanding of the arrow, pattern refers to example and sample input-output.

*/

vector<string> printArrowPattern(int n)
{
    int i=1;
    vector<string> ans;
    if(n==0){
        return ans;
    }
    while(i<=(2*n)-1){
        int j;
        string temp=" ";
        if(i<=n){
            j=1;
            while(j<i){
                temp +=" ";
                j++;
            }
            j=1;
            while(j<=i){
                temp +="*";
                j++;
            }
        }
        else{
            j=1;
            while(j<=(2*n-1) - i){
                temp +=" ";
                j++;
            }
            int k=1;
            while(k<=j){
                temp +="*";
                k++;
            }
        }
        ans.push_back(temp);
        i++;
    }
    return ans;
}

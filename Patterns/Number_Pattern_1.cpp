/*

	You are given an integer 'N'. Your task is to print the following pattern for the given N number of rows.

	For Example: Pattern for N = 4
	1
	11
	111
	1111

*/


void printPattern(int n) {
	if(n==0){
        return;
    }
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<1;
            j++;
        }
        i++;
        cout<<endl;
    }
}
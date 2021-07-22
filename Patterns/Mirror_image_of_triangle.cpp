/*

	Ninja’s younger sister got a project to print the pattern for the given number of rows, say ‘N’. She finds it difficult to write such a pattern for every ‘N’.
	Ninja decided to help his sister and decided to write a code for this but wasn't able to write the code for the same. Ninja wants help to write a code and asks you for help. Help Ninja.
	Example:
	Pattern for N = 2
    0
   101
  21012

*/

void pattern(int n)
{
    if(n<=0){
        return;
    }
    int i=0;
    while(i<=n){
        int j=i;
        while(j<n){
            cout<<" ";
            j++;
        }
        int k=i;
        while(k>=0){
            cout<<k;
            k--;
        }
        j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
}
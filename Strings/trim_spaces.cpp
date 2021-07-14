/*


	Given an input string S that contains multiple words, you need to remove all the spaces present in the input string.
	There can be multiple spaces present after any word.


*/

void trimSpaces(char input[]) {
    // Write your code here
    for(int i=0; i<strlen(input); i++){
        if(input[i]==' '){
            for(int j=i; j<strlen(input); j++){
                input[j]=input[j+1];
            }
            i--;
            
        }
    }
}
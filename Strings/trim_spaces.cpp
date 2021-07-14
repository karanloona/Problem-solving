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

// OR


void trimSpaces(char input[]) {
    int i=0;
    char arr[100000];
    int k=0;
    while(input[i]!='\0'){
        if(input[i]!=' '){
            arr[k]=input[i];
            k++;
        }
        i++;
    }
    i=0;
	while(arr[i]!='\n'){
        input[i]=arr[i];
        i++;
    }
}
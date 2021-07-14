/*

	For a given input string(str), write a function to print all the possible substrings.

*/


void printSubstrings(char input[]) {
    int len=strlen(input);
    for(int i=0; i<len; i++){
        for(int j=i; j<len; j++){
            for(int k=i; k<=j; k++){
                cout<<input[k];W
            }
            cout<<endl;
        }
    }
}
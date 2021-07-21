/*

	For a given string(str) and a character X, write a function to remove all the occurrences of X from the given string and return it.
	The input string will remain unchanged if the given character(X) doesn't exist in the input string.

*/

#include <iostream>
#include <cstring>
using namespace std;
void helper(string input, char c, string &output){
    if(input[0]=='\0'){
        return;
    }
    if(input[0]!=c){
        output +=input[0];
    }
    helper(input.substr(1),c,output);
}
string removeAllOccurrencesOfChar(string input, char c) {
    string output="";
    helper(input,c,output);
    return output;
}

int main() {
    string input;
    char c;
    cin >> input >> c;
    string output = removeAllOccurrencesOfChar(input, c);
    cout << output << endl;
    return 0;
}
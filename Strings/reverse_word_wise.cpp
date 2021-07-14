/*

	Reverse the given string word wise. That is, the last word in given string should come at 1st place, last second word at 2nd place and so on. Individual words should remain as it is.


*/




#include<bits/stdc++.h>

void reverseStringWordWise(char input[]) {
    // Write your code here
    int i=0;
    int len=0;
    //length
    while(input[i]!='\0'){
        i++;
        len++;
    }
    //temp array of length len
    char arr[len];
	
    i=len-1;
    int k=0;
    while(i>=0){
        int j=i;
        while(input[j]!=' ' && j+1!=0){
            j--;
        }
        int z=j;
        while(j<=i-1){
            arr[k]=input[j+1];
            k++;
            j++;
        }
        if(z-1>=0){
            arr[k]=' ';
            k++;
        }
        i=z-1;
    }
    for(int a=0; a<len; a++){
        input[a]=arr[a];
    }
    
}


// OR



void reverseStringWordWise(char input[]) {
    char input[]="Hope  this works";
    stack<string> s;
    int i=0;
    while(input[i]!='\0'){
        string temp="";
        int j=i;
        while(input[j]!='\0' && input[j]!=' '){
            temp +=input[j];
            j++;
        }
        if(temp!=""){
            s.push(temp);
        }
        i=j;
        if(j>=strlen(input)){
            break;
        }
        i++;
    }
    while(!s.empty()){
        
        cout<<s.top()<<" ";
        s.pop();
    }
}
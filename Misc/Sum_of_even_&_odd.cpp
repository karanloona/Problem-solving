/*

	Write a program to input an integer N and print the sum of all its even digits and sum of all its odd digits separately.
	Digits Mean Numbers, Not The Places! That Is, If The Given Integer Is "13245", Even Digits Are 2 & 4 And Odd Digits Are 1, 3 & 5.


*/

#include<iostream>
using namespace std;

int main() {
	int n,even=0,odd=0;
    cin>>n;
    while(n>0){
        int temp=n%10;
        temp%2==0?even +=temp:odd +=temp;
        n=n/10;
    }
    cout<<even<<" "<<odd;
}

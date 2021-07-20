/*

	You have been given a queue and an integer ‘K’. You need to reverse the order of the first ‘K’ elements of the queue.
	NOTE: The relative order of other elements should be maintained.



	INPUT: 
		The first line contains an integer 'T' which denotes the number of test cases or queries to be run. Then the test cases are as follows.

		The first line of each test case contains an integer ‘N’ which denotes the size of the queue.

		The second line of each test case contains elements of the queue. The line consists of values of elements of the queue separated by a single space.

		The third line of each test case contains an integer ‘K’ which denotes the number of elements to be reversed in the queue.


	OUTPUT:
		For each test case, print a single line containing space-separated integers denoting elements of the queue after reversing the first ‘K’ elements.

		The output of each test case will be printed in a separate line.

*/

#include<bits/stdc++.h>
void reverse(queue<int> &queue,int k)
{
    vector<int> v;
    if(k==0){
        return;
    }
    for(int i=0; i<k; i++){
       	v.push_back(queue.front());
        queue.pop();
    }
    reverse(v.begin(),v.end());
    while(!queue.empty()){
        v.push_back(queue.front());
        queue.pop();
    }
    for(int i=0; i<v.size(); i++){
        queue.push(v[i]);
    }
}



/*

	You are given a stack/deque of integers 'MY-STACK' and an integer ‘X’. Your task is to insert ‘X’ to the bottom of ‘MY-STACK’ and return the updated stack/deque.
	Note :
		If ‘MY_STACK’ = [7, 1, 4, 5], then the first element represents the element at the bottom of the stack and the last element represents the element at the top of the stack.

	For Example :
		Let ‘MY_STACK’ = [7, 1, 4, 5] and ‘X’ = 9. So, ‘MY_STACK’ after insertion becomes [9, 7, 1, 4, 5].

	Follow Up :
		Try to do this without using any other data structure.

*/

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    if(myStack.empty()){
        myStack.push(x);
        return myStack;
    }
    int temp=myStack.top();
    myStack.pop();
    myStack=pushAtBottom(myStack,x);
    myStack.push(temp);
    return myStack;
}


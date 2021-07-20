/*

	Reverse a given stack of integers using recursion.
	Note:
		You are not allowed to use any extra space other than the internal stack space used due to recursion.
		You are not allowed to use the loop constructs of any sort available as handy. For example: for, for-each, while, etc. 
		The only inbuilt stack methods allowed are:
		push(x) -- Push element x onto stack.
		pop() -- Removes the element on top of the stack.
		top() -- Get the top element.


*/


void insertIntoStack(stack<int> &stack, int save){
    if(stack.empty()){
        stack.push(save);
        return;
    }
    int temp=stack.top();
    stack.pop();
    insertIntoStack(stack,save);
    stack.push(temp);
}
void reverseStack(stack<int> &stack) {
    if(stack.empty()){
        return;
    }
    int save=stack.top();
    stack.pop();
    reverseStack(stack);
    insertIntoStack(stack,save);
}
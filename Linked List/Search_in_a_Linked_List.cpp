/*

	You are given a Singly Linked List of integers with a head pointer. Every node of the Linked List has a value written on it.
	Now you have been given an integer value 'K'. Your task is to check whether a node having a value equal to 'K' exists in the given linked list or not.

*/

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

int searchInLinkedList(LinkedListNode<int> *head, int k) {
    if(head==NULL){
        return 0;
    }
    if(head->data==k){
        return 1;
    }
    return searchInLinkedList(head->next,k);
}
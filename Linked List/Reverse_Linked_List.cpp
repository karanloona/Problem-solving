/*

	Given a singly linked list of integers. Your task is to return the head of the reversed linked list.

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

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) {
    if(head==NULL){
        return head;
    }
    if(head->next==NULL){
        return head;
    }
    LinkedListNode<int> *temp=reverseLinkedList(head->next);
    head->next->next=head;
    head->next=NULL;
    
    return temp;
    return temp;
}
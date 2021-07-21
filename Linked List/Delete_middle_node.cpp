/*

	You have been given a singly Linked List of integers. Your task is to delete the middle node of this List.
	Note:
		1. If there is no middle node in the list to delete, return an empty list (i.e. NULL).
		2. If there are two middle nodes in the list, delete the first one.

	Follow Up :
		Try to solve this problem in O(N) time complexity and O(1) space complexity.
		Can you solve it in only one traversal of the Linked List?
*/

/************************************************************

    Following is the linked list node structure:
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* deleteMiddle(Node<int>* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    if(head->next->next==NULL){
        return head->next;
    }
    Node<int>* slow=head;
    Node<int>* fast=head;
    Node<int>* prev=NULL;
    while(fast!=NULL && fast->next!=NULL){
        if(fast->next!=NULL && fast->next->next!=NULL){
            prev=slow;
        }
        slow=slow->next;
        fast=fast->next->next;
    }
    prev->next=prev->next->next;
    return head;
}


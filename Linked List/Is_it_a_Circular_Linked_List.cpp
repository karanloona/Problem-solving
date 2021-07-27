/*

You are given a Singly Linked List of integers. You have to find if the given linked list is circular or not.
A circular linked list is a sequence of elements in which every element has a link to its next element in the sequence and the last element has a link to the first element. This means that circular linked list is similar to the single linked list except that the last node points to the first node in the list.


*/

/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

bool circularLL(Node* head)
{
    Node* cur=head;
    while(cur!=NULL){
        if(cur->next==head){
            return true;
        }
        cur=cur->next;
    }
    return false;
}

/*

	Given the head node of the singly linked list, return a pointer pointing to the middle of the linked list.
	If there are an odd number of elements, return the middle element if there are even elements return the one which is farther from the head node.
	
	For example, let the linked list be 1->2->3->4->null
	Since the number of elements in this linked list is 4 so we have 2 middle elements, i.e. 2 and 3, but we return 3 as it is farther from the head node, i.e. 1.


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

Node *findMiddle(Node *head) {
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
	return slow;
}
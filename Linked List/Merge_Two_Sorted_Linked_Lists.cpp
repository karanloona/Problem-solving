/*

	You are given two sorted linked lists. You have to merge them to produce a combined sorted linked list. You need to return the head of the final linked list.

	Note:
		The given linked lists may or may not be null.

	For example:
		If the first list is: 1 -> 4 -> 5 -> NULL and the second list is: 2 -> 3 -> 5 -> NULL
		The final list would be: 1 -> 2 -> 3 -> 4 -> 5 -> 5 -> NULL

*/


/************************************************************

    Following is the linked list node structure.
    
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

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    if(first==NULL){
        return second;
    }
    if(second==NULL){
        return first;
    }
    Node<int>* ans_head=NULL;
    Node<int>* ans_tail=NULL;
    while(first!=NULL && second!=NULL){
        if(first->data>second->data){
            if(ans_head==NULL){
                ans_head=second;
                ans_tail=second;
            }
            else{
                ans_tail->next=second;
                ans_tail=ans_tail->next;
            }
            second=second->next;
        }
        else{
            if(ans_head==NULL){
                ans_head=first;
                ans_tail=first;
            }
            else{
                ans_tail->next=first;
                ans_tail=ans_tail->next;
            }
            first=first->next;
        }
    }
    while(first!=NULL){
        ans_tail->next=first;
        ans_tail=ans_tail->next;
        first=first->next;
    }
    while(second!=NULL){
        ans_tail->next=second;
        ans_tail=ans_tail->next;
        second=second->next;
    }
    return ans_head;
}




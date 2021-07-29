/*

	Given two numbers represented by two linked lists of size N and M. The task is to return a sum list.
	The sum list is a linked list representation of the addition of two input numbers from the last.
	Example:
		Input:
		N = 2
		valueN[] = {4,5}
		M = 3
		valueM[] = {3,4,5}
		Output: 3 9 0  
		Explanation: For the given two linked
		list (4 5) and (3 4 5), after adding
		the two linked list resultant linked
		list will be (3 9 0).

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* reverseLinkedList(Node* head){
        if(head->next==NULL){
            return head;
        }
        Node* temp=reverseLinkedList(head->next);
        head->next->next=head;
        head->next=NULL;
        return temp;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        if(first==NULL){
            return second;
        }
        if(second==NULL){
            return first;
        }
        
        struct Node* r_first=reverseLinkedList(first);
        struct Node* r_second=reverseLinkedList(second);
        int carry=0;
        struct Node* head=NULL;
        struct Node* tail=NULL;
        while(r_first!=NULL && r_second!=NULL){
            int sum=r_first->data+r_second->data+carry;
            if(sum>9){
                carry=1;
                sum=sum%10;
            }
            else{
                carry=0;
            }
            struct Node* temp=new Node(sum);
            if(head==NULL){
                head=temp;
                tail=temp;
            }
            else{
                tail->next=temp;
                tail=tail->next;
            }
            r_first=r_first->next;
            r_second=r_second->next;
        }
        while(r_first!=NULL){
            int sum=r_first->data+carry;
            if(sum>9){
                carry=1;
                sum=sum%10;
            }
            else{
                carry=0;
            }
            struct Node* temp=new Node(sum);
            tail->next=temp;
            tail=tail->next;
            r_first=r_first->next;
        }
        while(r_second!=NULL){
            int sum=r_second->data+carry;
            if(sum>9){
                carry=1;
                sum=sum%10;
            }
            else{
                carry=0;
            }
            struct Node* temp=new Node(sum);
            tail->next=temp;
            tail=tail->next;
            r_second=r_second->next;
        }
        if(carry>0){
            struct Node* temp=new Node(carry);
            tail->next=temp;
            tail=tail->next;
        }
        return reverseLinkedList(head);
    }
};
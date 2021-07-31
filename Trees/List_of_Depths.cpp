/*

	You are given a binary tree. Your task is to convert this binary tree into a linked list, such that the value at nodes is in the level order form.

*/


/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };


    Following is the class structure of the Node class for linked list:

        class Node
        {
        public:
            int data;
            Node *next;
            Node *child;
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
                this->child = NULL;
            }
        };

*****************************************************************/



// You need return the head pointer of the linked list
#include<bits/stdc++.h>
Node* listOfDepth(TreeNode<int> * root)
{
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    pendingNodes.push(NULL);
    Node* head=NULL;
    Node* tail=NULL;
    
    while(pendingNodes.size()>1){
        TreeNode<int>* curr=pendingNodes.front();
        pendingNodes.pop();
        if(curr==NULL){
            pendingNodes.push(NULL);
        }
        else{
            Node* temp=new Node(curr->data);
            if(head==NULL){
                head=temp;
                tail=temp;
            }
            else{
                tail->next=temp;
                tail=tail->next;
            }
            
            if(curr->left!=NULL){
                pendingNodes.push(curr->left);
            }
            if(curr->right!=NULL){
                pendingNodes.push(curr->right);
            }
        }
    }
   	
    
    return head;
}

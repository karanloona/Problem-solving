/*

	You are given a perfect binary tree where all leaves are on the same level, and every parent has two children. The binary tree has the following definition:

	struct Node {
		int val;
		Node *left;
		Node *right;
		Node *next;
	}

	Populate each next pointer to point to its next right node. If there is no next right node, the next pointer should be set to NULL.

	Initially, all next pointers are set to NULL.



*/


class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL){
            return root;
        }
        if(root->left==NULL && root->right==NULL){
            root->next=NULL;
            return root;
        }
        queue<Node*> q;
        q.push(root);
        q.push(NULL);
        root->next=NULL;
        while(q.size()>1){
            Node* curr=q.front();
            q.pop();
            Node* curr_next=q.front();

            if(curr==NULL){
                q.push(NULL);
            }
            else{
                if(curr_next!=NULL){
                    curr->next=curr_next;
                }
                if(curr->left!=NULL){
                    q.push(curr->left);
                }
                if(curr->right!=NULL){
                    q.push(curr->right);
                }
            }
        }
        return root;
    }
};
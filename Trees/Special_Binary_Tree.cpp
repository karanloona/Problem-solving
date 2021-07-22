/*

	You are given an arbitrary binary tree. A binary tree is called special if every node of this tree has either zero or two children. You have to determine if the given binary tree is special or not.
	If the given binary tree is special, return True. Else, return False to the given function.
	Note:
		1. A binary tree is a tree in which each node can have at most two children. 
		2. The given tree will be non-empty i.e the number of non-NULL nodes will always be greater than or equal to 1.
		3. Multiple nodes in the tree can have the same values, all values in the tree will be positive.

*/

/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

bool isSpecialBinaryTree(BinaryTreeNode<int>* root)
{
    if(root==NULL){
        return false;
    }
    if(root->left==NULL && root->right==NULL){
        return true;
    }
    if((root->left==NULL && root->right!=NULL) || (root->left!=NULL && root->right==NULL)){
        return false;
    }
    bool ans=isSpecialBinaryTree(root->left);
    if(ans==true){
        ans=isSpecialBinaryTree(root->right);
    }
    return ans;
}
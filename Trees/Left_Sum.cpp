/*

	Given a binary tree having ‘N’ number of nodes. Your task is to find the sum of all left nodes present in the input binary tree. That is, you need to take the sum of all nodes which are the left child of some node.
	Note:
		1. A binary tree is a tree in which each node can have at most two children. 
		2. The given tree will be non-empty i.e the number of non-NULL nodes will always be greater than or equal to 1.
		3. Multiple nodes in the tree can have the same values, all values in the tree will be positive.

*/

/*
	Tree Node class.

	class BinaryTreeNode 
	{
		T data;
		BinaryTreeNode<T> *left;
		BinaryTreeNode<T> *right;

		BinaryTreeNode(T data) {
			this->data = data;
			left = NULL;
			right = NULL;
		}
	}
*/

void helper(BinaryTreeNode<int> *root,long long &ans,bool isLeft){
    if(root==NULL){
        return;
    }
    if(isLeft==true){
        ans +=root->data;
    }
    helper(root->left,ans,true);
    helper(root->right,ans,false);
}
long long leftSum(BinaryTreeNode<int> *root)
{
	long long ans=0;
    helper(root->left,ans,true);
    helper(root->right,ans,false);
    return ans;
}
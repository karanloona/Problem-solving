/*

			Algorithm Preorder(tree)
			1. Visit the root.
			2. Traverse the left subtree, i.e., call Preorder(left-subtree)
			3. Traverse the right subtree, i.e., call Preorder(right-subtree)

*/

void do_preorder(BinaryTreeNode<int> *root, vector<int>& preorder){
    if(root==NULL){
        return;
    }
    preorder.push_back(root->data);
    do_preorder(root->left,preorder);
    do_preorder(root->right,preorder);
}
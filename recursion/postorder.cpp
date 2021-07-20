/*

		Algorithm Postorder(tree)
		1. Traverse the left subtree, i.e., call Postorder(left-subtree)
		2. Traverse the right subtree, i.e., call Postorder(right-subtree)
		3. Visit the root.

*/


void do_postorder(BinaryTreeNode<int> *root, vector<int> &postorder){
    if(root==NULL){
        return;
    }
    do_postorder(root->left,postorder);
    do_postorder(root->right,postorder);
    postorder.push_back(root->data);
}
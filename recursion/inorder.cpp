/*


	Algorithm Inorder(tree)
   1. Traverse the left subtree, i.e., call Inorder(left-subtree)
   2. Visit the root.
   3. Traverse the right subtree, i.e., call Inorder(right-subtree)



*/

void do_inorder(BinaryTreeNode<int> *root, vector<int>& inorder){
    if(root==NULL){
        return;
    }
    do_inorder(root->left,inorder);
    inorder.push_back(root->data);
    do_inorder(root->right,inorder);
}
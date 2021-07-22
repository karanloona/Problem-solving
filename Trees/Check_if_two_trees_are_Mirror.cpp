/*

	You are given two arbitrary binary trees consisting of N and M number of nodes respectively, your task is to check whether the two trees are mirror of each other or not.
	Two trees are said to be mirror of each other, if
	Note:
		1. Roots of both the given trees are same.
		2. Left subtree of the root of the first tree is the mirror of the right subtree of the root of the second tree.
		3. Right subtree of the root of the first tree is the mirror of the left subtree of the root of the second tree.

*/

/*******************************************
  Following is the BinaryTreeNode structure
  
template<typename T>
class BinaryTreeNode {
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

********************************************/

bool areMirror(BinaryTreeNode<int> *root1, BinaryTreeNode<int> *root2)
{
    if(root1==NULL && root2==NULL){
        return true;
    }
    if((root1==NULL && root2!=NULL) || (root1!=NULL && root2==NULL)){
        return false;
    }
    if(root1->data!=root2->data){
        return false;
    }
    bool ans=areMirror(root1->left,root2->right);
    if(ans==true){
        ans=areMirror(root1->right, root2->left);
    }
    return ans;

}
/*

	You have been given a Binary Search Tree and a key value ‘X’, find if a node with value ‘X’ is present in the BST or not.
	Note:
		You may assume that duplicates do not exist in the tree.

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

************************************************************/

bool findNode(TreeNode <int> * root, int key) {
    if(root==NULL){
        return false;
    }
    if(root->data==key){
        return true;
    }
    bool ans=false;;
    if(key<root->data){
        ans=findNode(root->left,key);
    }
    if(ans!=true){
      	ans=findNode(root->right,key);
    }
    return ans;
}
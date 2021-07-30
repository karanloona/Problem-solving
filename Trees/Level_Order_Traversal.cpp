/*

	You have been given a Binary Tree of integers. You are supposed to return the level order traversal of the given tree.

*/

/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    pendingNodes.push(NULL);
    while(pendingNodes.size()>1){
        BinaryTreeNode<int>* current=pendingNodes.front();
        pendingNodes.pop();
        if(current==NULL){
            pendingNodes.push(NULL);
        }
        else{
            if(current->left!=NULL){
                pendingNodes.push(current->left);
            }
            if(current->right!=NULL){
                pendingNodes.push(current->right);
            }
            ans.push_back(current->val);
        }
    }
    return ans;
}
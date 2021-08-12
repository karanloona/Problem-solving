/*

	Given a binary tree, find its height.

	Input:
     1
    /  \
   2    3
	Output: 2

*/

#ifndef max
#define max(a,b)            (((a) < (b)) ? (b) : (a))
#endif
int height(struct Node* node)
{
    if(node==NULL){
        return 0;
    }
    return max(height(node->left)+1, height(node->right)+1);
}

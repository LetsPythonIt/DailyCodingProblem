/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        
        if (root == NULL) return true; // We have tested every condition
        
        // Is left not equal to root
        if (root->left!=NULL){
            if (root->left->val != root->val) return false;
        }
        
        // Is right not equal to root
        if (root->right!=NULL){
            if (root->right->val != root->val) return false;
        }
        
        // Now check for left and right child
        return isUnivalTree(root->left) && isUnivalTree(root->right);
    }
};

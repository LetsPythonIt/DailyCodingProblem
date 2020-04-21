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
    int sumBinaryTree(TreeNode* root) {
        if (root==NULL) return 0;
	return root->val + sumNumbers(root->left) + sumNumbers(root->right);
    }
};

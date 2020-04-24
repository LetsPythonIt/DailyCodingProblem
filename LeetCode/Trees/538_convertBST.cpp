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
    int sum = 0;
    void RPL(TreeNode* root){
        // R-P-L tree traversal
        
        if (root == NULL) return;

        RPL(root->right);
        
        sum += root->val;
        root->val = sum;
        std::cout << root->val << " ";
        
        RPL(root->left);
        
    }
    TreeNode* convertBST(TreeNode* root) {
        // Trying RPL tree traversal
        RPL(root);
        return root;
    }
};

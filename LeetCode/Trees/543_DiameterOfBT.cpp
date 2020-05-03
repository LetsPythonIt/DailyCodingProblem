/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int currentMaximumDiameter = 1;
    
    int diameterOfBinaryTree(TreeNode* root){
        Depth(root);
        return currentMaximumDiameter - 1;
    }
    
    int Depth(TreeNode* root) {
        if (root == NULL) return 0;
        
        int LeftDepth = Depth(root->left); // check Left height
        int RightDepth = Depth(root->right); // check Right height
        currentMaximumDiameter = max(LeftDepth + RightDepth + 1, currentMaximumDiameter);// Can current node be present of maximum dia path?
        return max(LeftDepth, RightDepth) + 1;// Inform parent about which side is longer including the node itself
    }
};

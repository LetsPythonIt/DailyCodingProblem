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
    vector<int> InOrderVector;
    bool isValidBST(TreeNode* root) {
        
        if (!root) return true;
        
        isValidBST(root->left);
        InOrderVector.push_back(root->val);
        isValidBST(root->right);
        
        for (int i=0; i<InOrderVector.size()-1; i++){
            if (InOrderVector[i] >= InOrderVector[i+1]) return false;
        }
        
        return true;
    }
};

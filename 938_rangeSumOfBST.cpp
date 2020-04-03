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
    int rangeSumBST(TreeNode* root, int L, int R) {
        int sum = 0;
        sum = getSum(root, L, R);
        return sum;        
    }
    
    
    int getSum(TreeNode* root, int L, int R){
        if (root == NULL)
            return 0;
       
        int sum =0;
        
        if(root->val >= L && root->val <= R) {
            return sum + root->val + getSum(root->left, L, R) + getSum(root->right, L, R);
        }
        return sum + getSum(root->left, L, R) + getSum(root->right, L, R);
    }
};

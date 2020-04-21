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
    bool isSymmetric(TreeNode* root) {
        
        if (root != NULL) return checkSymm(root->left,root->right);
        return true;
    }
    
    bool checkSymm(TreeNode* A, TreeNode* B){
        
       if (A!= NULL && B!= NULL) {
            if (A->val == B->val){
                bool isSym1 = checkSymm(A->right, B->left);
                bool isSym2 = checkSymm(A->left, B->right);
                return (isSym1 && isSym2);
            }
            else return false;
        }
        else if (A == NULL && B == NULL) return true;
        
        else return false;
    }
    
    
};

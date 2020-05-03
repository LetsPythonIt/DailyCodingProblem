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
    std::string completeTree = "";
    std::string subTree = "";
    std::string TemporaryStringHolder = "";
    
    void PreOrderTraverse(TreeNode* root1){
        if (root1 == NULL) {
            TemporaryStringHolder += "x";
            return;
        }
        
        TemporaryStringHolder = TemporaryStringHolder + "#" + to_string(root1->val);
        
        PreOrderTraverse(root1->left);
        PreOrderTraverse(root1->right);
    }
    
    bool isSubtree(TreeNode* s, TreeNode* t) {
        bool answer = false;
        PreOrderTraverse(t);
        subTree += TemporaryStringHolder;
        
        TemporaryStringHolder = "";
        PreOrderTraverse(s);
        completeTree += TemporaryStringHolder;
        
        std::cout << subTree << std::endl;
        std::cout << completeTree << std::endl;
        
        size_t found = completeTree.find(subTree); 
        std::cout << found << std::endl;
        if (found != string::npos) {
            cout << "First occurrence is " << found << endl;
            return true;
        }
        
        return answer;
        
        
    }
};

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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> returnVector;
        queue<TreeNode*> elementQ; // create an empty queue
        elementQ.push(root); // add root to the queue
        
        if (!root) return returnVector;
        // vector<int> rootVector;
        // rootVector.push_back(root->val);
        // returnVector.push_back(rootVector);
        
        // run a loop until queue is over
        while(elementQ.empty() == false){
            int size = elementQ.size();
            vector<int> childVector;
            for (int i=0; i<size; i++){
                TreeNode* currentNode = elementQ.front();
                childVector.push_back(currentNode->val);
                elementQ.pop();
                if (currentNode->left) {
                    elementQ.push(currentNode->left);
                }
                if (currentNode->right) {
                    elementQ.push(currentNode->right);
                }
            }
            returnVector.push_back(childVector);
        
        }
        
        return returnVector;
    }
};

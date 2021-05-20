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
        vector<vector<int>> ans; 
        queue<TreeNode*> queue; 
        queue.push(root); 
        
        while (queue.size()) {
            vector<int> vals; 
            for (int i = 0, n = queue.size(); i < n; ++i) {
                TreeNode* node = queue.front(); 
                queue.pop(); 
                if (node) {
                    vals.push_back(node->val); 
                    queue.push(node->left);
                    queue.push(node->right); 
                }
            }
            if (vals.size()) ans.push_back(vals); 
        }
        return ans; 
    }
};
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
    void postorder(TreeNode* root, int &sum){
        if(!root) return;
        postorder(root->right, sum);
        root->val+=sum;
        sum=root->val;
        postorder(root->left, sum);
        
    }
    
    TreeNode* convertBST(TreeNode* root) {
         if(!root)
            return NULL;
        int sum=0;
        postorder(root, sum);
        return root;
        
    }
};
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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>ans;
        if(root==NULL)
            return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            int m=n;
            double avg=0;
            while(n--)
            {
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
                avg+=temp->val;
            }
            //cout<<avg<<" ";
            avg=avg/m;
           // cout<<avg<<" ";
            ans.push_back(avg);
        }
        return ans;
        
    }
};
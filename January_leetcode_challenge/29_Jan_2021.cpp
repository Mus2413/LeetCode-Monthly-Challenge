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
    static bool compare(const pair<int,int>&a,const pair<int,int>&b)
    {
        if(a.second>b.second)
            return true;
        if(a.second==b.second)
        {
            if(a.first<=b.first)
                return true;
            else
                return false;
        }
        return false;
    }
    void inorder(TreeNode* root ,map<int,vector<pair<int,int>>>& mp,int x,int y )
    {
        if(root!=NULL)
        {
            
            inorder(root->left,mp,x-1,y-1);
            mp[x].push_back({root->val,y});
            inorder(root->right,mp,x+1,y-1);
        }
        return ;
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,vector<pair<int,int>>> mp;
        inorder(root,mp,0,0);
        
        vector<vector<int>> ans;
        for(auto i:mp)
        {
            vector<int>temp;
            if(i.second.size()>1)
            {
                sort(i.second.begin(),i.second.end(),compare);
            }
            for(int j=0;j<i.second.size();j++)
            {
                temp.push_back(i.second[j].first);
            }
            ans.push_back(temp);
            
        }
        return ans;
    }
};
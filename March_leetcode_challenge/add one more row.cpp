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
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
        TreeNode* temp;
        int count=0;

    if(d==1)
    {
        temp=new TreeNode();
        temp->val=v;
        temp->left=root;
        return temp;
    }
    else
    {
        --d;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        while(!q.empty())
        {
           temp=q.front();
           count++;
            if(temp!=NULL)
            {
                while(q.front()!=NULL)
                {
                    if(count==d)
                    {
                        TreeNode* left1=temp->left;
                        TreeNode* right1=temp->right;
                        TreeNode* n1=new TreeNode();
                        TreeNode *n2=new TreeNode();
                        n1->val=v;
                        n2->val=v;
                        n1->left=left1;
                        n1->right=NULL;
                        n2->right=right1;
                        n2->left=NULL;
                        temp->left=n1;
                        temp->right=n2;
                    }
                    if(temp->left)
                        q.push(temp->left);
                    if(temp->right)
                        q.push(temp->right);
                    q.pop();
                    temp=q.front();
                }
                q.push(NULL);
            }
            q.pop();
            if(count>=d)
                break;
        }
        return root;
    }
    }
};
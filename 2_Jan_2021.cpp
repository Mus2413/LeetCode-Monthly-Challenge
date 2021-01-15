/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void getnode(TreeNode* cloned,TreeNode* target,TreeNode** firstnode)
{
    if(cloned==NULL)
        return ;
    if(cloned->val==target->val)
    {
        *firstnode=cloned;
        return;
    }  
    getnode( cloned->left, target,firstnode);
    getnode( cloned->right, target,firstnode);
    return ;
    
    
}
class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
            TreeNode* firstnode=NULL ;
             getnode( cloned, target,&firstnode);
        return firstnode;
        
    }
};
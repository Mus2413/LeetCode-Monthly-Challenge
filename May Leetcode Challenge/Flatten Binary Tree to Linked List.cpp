stack<TreeNode*> s;
TreeNode* flattentree(TreeNode* root)
{
    if(root==NULL)
            return  NULL;
        TreeNode* t1=root,*prev,*t2;
        while(root!=NULL)
        {
            if(root->right)
                s.push(root->right);
            prev=root;
            root->right=root->left;
            t2=root->left;
            root->left=NULL;
            root=t2;
            
        }
        if(s.empty()==false)
        {
            TreeNode* temp=s.top();
            s.pop();
            TreeNode* t=flattentree(temp);
            prev->right=t;
            
        }
        return t1;
        
    
}
class Solution {
    
public:
    void flatten(TreeNode* root) {
        root=flattentree(root);
        return;
    }
        
};
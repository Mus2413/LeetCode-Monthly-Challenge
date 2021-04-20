class Solution {
public:
    void preorder_rec(Node *root, vector<int> &res)
    {
        if(root == nullptr)
            return;
        
        res.push_back(root->val);
        for(auto node : root->children)
            preorder_rec(node, res);
    }
    vector<int> preorder(Node* root) {
        vector<int> res;
        preorder_rec(root, res);
        return res;
    }
};
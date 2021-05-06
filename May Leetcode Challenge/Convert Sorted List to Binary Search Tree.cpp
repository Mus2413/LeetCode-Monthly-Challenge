class Solution {
public:
    TreeNode* build(vector<int>& vec, int i, int n) {
        if (n <= 0)
            return nullptr;

        auto midIdx = i + n / 2;
        auto left = build(vec, i, midIdx - i);
        auto right = build(vec, midIdx + 1, n - midIdx + i - 1);
        return new TreeNode(vec[midIdx], left, right);
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> vec;
        for (; head; head = head->next)
            vec.push_back(head->val);
        return build(vec, 0, size(vec));
    }
   
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* SortedMerge(ListNode* a, ListNode* b) 
   { 
    ListNode* result = NULL; 
    if (a == NULL) 
        return (b); 
    else if (b == NULL) 
        return (a); 
    if (a->val<= b->val) { 
        result = a; 
        result->next = SortedMerge(a->next, b); 
    } 
    else { 
        result = b; 
        result->next = SortedMerge(a, b->next); 
    } 
    return (result); 
} 
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* l=NULL;
        int n=lists.size();
        if(n==0)
            return l;
        else if(n==1)
        {
            l=lists[0];
            return l;
        }
        else
        {
            for(int i=1;i<n;i++)
            {
                lists[i]=SortedMerge(lists[i],lists[i-1]);
            }
        }
            
        return lists[n-1];
    }
};
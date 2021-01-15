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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
            return NULL;
        map<int,int> mp;
        ListNode* start=head;
        while(start!=NULL)
        {
            mp[start->val]++;
            start=start->next;
        }
        start=head;
        ListNode* prev=NULL;
        for(auto x: mp)
        {
            if(x.second==1)
            {
                start->val=x.first;
                prev=start;
                start=start->next;
            }
        }
        if(prev)
        prev->next=NULL;
        else
            head=NULL;
        return head;
        
    }
};
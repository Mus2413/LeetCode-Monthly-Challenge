/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int n=0,m=0;
        ListNode* start1=headA,*start2=headB;
        while(start1!=NULL)
        {
            n++;
            start1=start1->next;
        }
        while(start2!=NULL)
        {
            m++;
            start2=start2->next;
        }
        start1=headA;
        start2=headB;
        if(m>n)
        {
            swap(m,n);
            swap(start1,start2);
        }
        int count=n-m;
        while(count>0)
        {
            start1=start1->next;
            count--;
        }
        while(start1!=start2)
        {
            start1=start1->next;
            start2=start2->next;
        }
        return start1;
        
    }
};
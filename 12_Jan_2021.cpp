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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode*start1=l1,*start2=l2,*prev;
        while(start1!=NULL && start2!=NULL)
        {
            int x=start1->val+start2->val+carry;
            if(x<=9)
            {
                start1->val=x;
                carry=0;
            }
            else
            {
                start1->val=x%10;
                carry=1;
            }
            prev=start1;
            start1=start1->next;
            start2=start2->next;
        }
        if(start1==NULL && start2!=NULL)
        {
            while(start2!=NULL)
            {
                int x=start2->val+carry;
                if(x<=9)
                {
                    start2->val=x;
                    carry=0;
                }
                else
                {
                    start2->val=x%10;
                    carry=1;
                }
                prev->next=start2;
                prev=start2;
                start2=start2->next;
            }
        }
        if(start2==NULL && start1!=NULL)
        {
            while(start1!=NULL)
            {
                int x=start1->val+carry;
                if(x<=9)
                {
                    start1->val=x;
                    carry=0;
                }
                else
                {
                    start1->val=x%10;
                    carry=1;
                }
                prev->next=start1;
                prev=start1;
                start1=start1->next;
            }
        }
        if(carry==1)
        {
            ListNode* temp=new ListNode(1);
            prev->next=temp;
        }
        
        return l1;
        
    }
};
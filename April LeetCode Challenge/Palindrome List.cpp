class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return true;
        ListNode* fast=head, *slow=head;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* temp=slow->next;
        slow->next=NULL;
        ListNode* t1=NULL,*t2=NULL,*start=temp;
        while(start!=NULL)
        {
            t2=start->next;
            start->next=t1;
            t1=start;
            start=t2;
        }
        while(t1!=NULL && head!=NULL)
        {
            if(t1->val!=head->val)
                return false;
            
            t1=t1->next;
            head=head->next;
        }
        return true;
    }
};
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL)
            return NULL;
        int size=0;
        ListNode* start=head;
        while(start!=NULL)
        {
            size++;
            start=start->next;
        }
        start=head;
        if(n==size)
        {
            head=head->next;
            return head;
        }
        int x=size-n;
        int i=1;
        while(i<x)
        {
            start=start->next;
            i++;
        }
        start->next=start->next->next;
        return head;
        
    }
};
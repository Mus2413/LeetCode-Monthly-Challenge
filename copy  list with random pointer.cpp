/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
         unordered_map<Node*,Node*> hash;
        auto h = head;
        while(h)
        {   
            Node* N=new Node(0);
            N->val=h->val;
            hash[h]=N;
            h=h->next;
        }
        h=head;
        while(h)
        {
            hash[h]->next = hash[h->next];
            hash[h]->random= hash[h->random];
            h=h->next;
        }
        return hash[head];
    }
};
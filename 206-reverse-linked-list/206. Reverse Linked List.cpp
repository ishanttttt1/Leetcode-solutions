class Solution{
public:
    ListNode* reverseList(ListNode* head){
        ListNode*prev=nullptr;
        ListNode*curr=head;
        while(curr!=nullptr){
            ListNode*Nextnode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Nextnode;
        }
        return prev;
        
    }
};
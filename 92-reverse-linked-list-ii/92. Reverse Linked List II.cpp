class Solution{
public:
    ListNode* reverseBetween(ListNode* head, int left, int right){
     ListNode dummy(0);
     dummy.next=head;
     ListNode*beforeleft=&dummy;
     for(int i=1;i<left;i++){
        beforeleft=beforeleft->next;
     }
        ListNode*lefttraversal=beforeleft->next;
        ListNode*prev=nullptr;
        ListNode*curr=lefttraversal;
        for(int k=0;k<right-left+1;k++){
            ListNode*nextnode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextnode;
        }
        lefttraversal->next=curr;
        beforeleft->next=prev;
        return dummy.next;   
    }
};
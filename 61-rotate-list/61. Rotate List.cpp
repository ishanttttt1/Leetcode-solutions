class Solution{
public:
    ListNode*rotateRight(ListNode* head, int k){
        if(head==nullptr||k==0||head->next==nullptr){
            return head;
        }
        int length=0;
        ListNode*temp=head;
        while(temp!=nullptr){
            length++;
            temp=temp->next;
        }
        k=k%length;
        if (k == 0){
           return head;
}
        ListNode*curr=head;
        ListNode*base=head;
        for(int i=0;i<length-k-1;i++){
            curr=curr->next;
        }
        ListNode*newhead=curr->next;
        ListNode*tail=newhead;
        while(tail->next!=nullptr){
            tail=tail->next;
        }
        tail->next=base;
        curr->next=nullptr;
        return newhead;
    }
};
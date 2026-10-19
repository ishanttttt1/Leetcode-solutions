class Solution{
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head){
        ListNode*curr=head;
        while(curr->next!=nullptr){
            int a=curr->val;
            int b=curr->next->val;
            while(b!=0){
                int remainder=a%b;
                a=b;
                b=remainder;
            }
            int ans=a;
            ListNode*newnode=new ListNode(ans);
            newnode->next=curr->next;
            curr->next=newnode;
            curr=curr->next->next;
        }
        return head;
    }
};
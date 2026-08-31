class Solution{
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k){
        int n=0;
        ListNode*temp=head;
        while(temp!=nullptr){
            n++;
            temp=temp->next;
        }
        int base=n/k;
        int extras=n%k;
        vector<ListNode*>results;
        ListNode*curr=head;
        for(int i=0;i<k;i++){
            ListNode*save=curr;
            int partsize=base;
            if(extras>0){
                partsize++;
                extras--;
            }
            for(int j=1;j<partsize;j++){
                curr=curr->next;
            }
            if(curr!=nullptr){
                ListNode*next=curr->next;
                curr->next=nullptr;
                curr=next;
            }
            results.push_back(save);
        }
        return results;
    }
};
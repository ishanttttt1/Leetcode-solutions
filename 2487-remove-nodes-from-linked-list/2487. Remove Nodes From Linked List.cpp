class Solution{
public:
    ListNode*removeNodes(ListNode* head){
        stack<ListNode*>st;
        ListNode*curr=head;
        while(curr!=nullptr){
            while(!st.empty()&&st.top()->val<curr->val){
                st.pop();
            }
            st.push(curr);
            curr=curr->next;
        }
        ListNode*prev=nullptr;
        while(!st.empty()){
            curr=st.top();
            st.pop();
            curr->next=prev;
            prev=curr;
        }
        return prev;
    }
};
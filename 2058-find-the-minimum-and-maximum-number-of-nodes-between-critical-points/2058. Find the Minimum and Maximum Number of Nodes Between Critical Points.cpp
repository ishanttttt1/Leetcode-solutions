class Solution{
public:
    vector<int>nodesBetweenCriticalPoints(ListNode* head){
        vector<int>position;
        int positions=2;
        if(head==nullptr){
        return{-1,-1};
     }
     ListNode*prev=head;
     ListNode*current=head->next;
     ListNode*nextnode=current->next;
     if(current==nullptr){
        return{-1,-1};
     }
     while(nextnode!=nullptr){
        if(current->val<prev->val&&current->val<nextnode->val){
            position.push_back(positions);
        }
         if(current->val>prev->val&&current->val>nextnode->val){
            position.push_back(positions);
        }
            prev=current;
            current=nextnode;
            nextnode=nextnode->next;
            positions++;
        }
        if(position.size()<2){
            return{-1,-1};
        }
        int mindistance=INT_MAX;
        for(int i=1;i<position.size();i++){
            mindistance=min(mindistance,position[i]-position[i-1]);
        }
            int maxdistance=position[position.size()-1]-position[0];
        return {mindistance,maxdistance};   
    }
};
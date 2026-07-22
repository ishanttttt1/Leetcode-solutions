class Solution{
public:
    Node* copyRandomList(Node* head){
        if (head ==nullptr)
            return nullptr;
        unordered_map<Node*, Node*> mp;
        Node* curr = head;
        while (curr != nullptr) {
            Node* copy = new Node(curr->val);
            mp[curr] = copy;
            curr = curr->next;
        }
        curr = head;
        while (curr !=nullptr){
            Node* copy = mp[curr];
            copy->next = (curr->next !=nullptr) ? mp[curr->next] : nullptr;
            copy->random = (curr->random != nullptr) ? mp[curr->random] : nullptr;

            curr = curr->next;
        }
        return mp[head];
    }
};

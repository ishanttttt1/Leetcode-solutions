class Solution{
public:
vector<int>ans;
void naryPostorder(Node*node){
    if(node==nullptr){
        return;
    }
    for(int i=0;i<node->children.size();i++){
        naryPostorder(node->children[i]);
    }
    ans.push_back(node->val);
}
    vector<int>postorder(Node* root){
        naryPostorder(root);
        return ans;
    }
};
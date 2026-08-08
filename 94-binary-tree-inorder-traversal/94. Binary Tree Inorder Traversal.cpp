class Solution{
public:
vector<int>result;
void inordertraversal(TreeNode*node){
    if(node==nullptr){
        return ;
    }
    inordertraversal(node->left);
    result.push_back(node->val);
    inordertraversal(node->right);
}
    vector<int> inorderTraversal(TreeNode* root){
        inordertraversal(root);
        return result;
    }
};
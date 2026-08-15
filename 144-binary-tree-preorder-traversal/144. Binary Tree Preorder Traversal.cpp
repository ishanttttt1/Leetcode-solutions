class Solution{
public:
vector<int>ans;
void preorderTraversals(TreeNode*node){
    if(node==nullptr){
        return;
    }
        ans.push_back(node->val);
        preorderTraversals(node->left);
        preorderTraversals(node->right);
}
    vector<int>preorderTraversal(TreeNode*root){
        preorderTraversals(root);
        return ans;
    }
};
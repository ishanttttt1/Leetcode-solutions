
class Solution{
public:
    void dfs(TreeNode*root){
        if(root==nullptr){
            return;
        }
        swap(root->left,root->right);
        dfs(root->left);
        dfs(root->right);
    }
    TreeNode* invertTree(TreeNode* root){
        dfs(root);
        return root;
    }
};
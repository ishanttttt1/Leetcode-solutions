class Solution{
public:
int dfs(TreeNode*node,int low,int high){
    if(node==nullptr){
        return 0;
    }
    if(node->val<low){
        return dfs(node->right,low,high);
    }
    if(node->val>high){
        return dfs(node->left,low,high);
    }
    return node->val+dfs(node->left,low,high)+dfs(node->right,low,high);
}
    int rangeSumBST(TreeNode* root, int low, int high){
        return dfs(root,low,high);
    }
};
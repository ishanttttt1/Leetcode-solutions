class Solution{
public:
    TreeNode*dfs(TreeNode*node,int target){
        if(node==nullptr){
            return nullptr;
        }
        node->left=dfs(node->left,target);
        node->right=dfs(node->right,target);
        if(node->left==nullptr&&node->right==nullptr&&node->val==target){
            return nullptr;//delete it(leaf node)
        }
        return node;
    }
    TreeNode* removeLeafNodes(TreeNode* root, int target){
        return dfs(root,target);
    }
};
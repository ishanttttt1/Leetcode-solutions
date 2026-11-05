class Solution{
public:
  TreeNode*dfs(TreeNode*node,TreeNode*cloned,TreeNode*target){
    if(node==nullptr){
        return nullptr;
    }
    if(node==target){
        return cloned;
    }
    TreeNode*left=dfs(node->left,cloned->left,target);
    TreeNode*right=dfs(node->right,cloned->right,target);
    if(left!=nullptr){
        return left;
    }
    return right;
    }
    TreeNode*getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target){
                     return dfs(original,cloned,target);
    }
};
class Solution{
public:
    bool dfs(TreeNode*node){
        if(node->left==nullptr&&node->right==nullptr){
            if(node->val==0){
                return false;
            }
            if(node->val==1){
                return true;
            }
    }
    bool left=dfs(node->left);
    bool right=dfs(node->right);
    if(node->val==2){
        return left||right;
    }else{
        return left&&right;
    }
    }
    bool evaluateTree(TreeNode* root){
        return dfs(root);
    }
};
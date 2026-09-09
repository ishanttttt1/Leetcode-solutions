class Solution{
public:
    int deepestlevel(TreeNode*node){
        if(node==nullptr){
            return 0;
        }
        int leftdepth=deepestlevel(node->left);
        int rightdepth=deepestlevel(node->right);
        return 1+max(leftdepth,rightdepth);
    }
    int sumdeepest(TreeNode*node,int depth,int deepest){
        if(node==nullptr){
            return 0;
        }
        if(depth==deepest&&node->left==nullptr&&node->right==nullptr){
            return node->val;
        }
        return sumdeepest(node->left,depth+1,deepest)+sumdeepest(node->right,depth+1,deepest);
    }
    int deepestLeavesSum(TreeNode* root){
        int deepest=deepestlevel(root);
        return sumdeepest(root,1,deepest);
    }
};
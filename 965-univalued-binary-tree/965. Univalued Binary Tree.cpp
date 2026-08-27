class Solution{
public:
bool uni(TreeNode*node,int reference){
    if(node==nullptr){
        return true;
    }
    if(node->val!=reference){
        return false;
    }
    bool left=uni(node->left,reference);
    bool right=uni(node->right,reference);
    return left&&right;
}
    bool isUnivalTree(TreeNode* root){
        if(root==nullptr){
            return true;
        }
        return uni(root,root->val);
    }
};
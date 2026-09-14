class Solution{
public:
bool mirror(TreeNode*p,TreeNode*q){
    if(p==nullptr&&q==nullptr){
        return true;
    }
    if(p==nullptr||q==nullptr){
        return false;
    }
    if(p->val!=q->val){
        return false;
    }
    bool leftresult=mirror(p->left,q->right);
    bool rightresult=mirror(p->right,q->left);
    return leftresult&&rightresult;
}
    bool isSymmetric(TreeNode* root){
        if(root==nullptr){
            return false;
        }
    return mirror(root->left,root->right);
        
    }
};
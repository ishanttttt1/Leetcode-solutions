class Solution{
public:
bool symmetrichelper(TreeNode*p,TreeNode*q){
    if(p==nullptr&&q==nullptr){
        return true;
    }
    if(p==nullptr||q==nullptr){
        return false;
    }
    if(p->val!=q->val){
        return false;
    }
    bool leftcheck=symmetrichelper(p->left,q->right);
    bool rightcheck=symmetrichelper(p->right,q->left);
    return leftcheck&&rightcheck;
}
    bool isSymmetric(TreeNode* root){
        if(root==nullptr){
            return true;
        }
        return symmetrichelper(root->left,root->right);
    }
};
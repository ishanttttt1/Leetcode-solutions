class Solution{
public:
TreeNode*prev=nullptr;
TreeNode*newroot=nullptr;
void inorder(TreeNode*node){
    if(node==nullptr){
        return;
    }
    TreeNode*leftchild=node->left;
    TreeNode*rightchild=node->right;
    inorder(leftchild);
    node->right=nullptr;
     node->left =nullptr;
    if(prev!=nullptr){
        prev->right=node;
    }else{
        newroot=node;
    }
    prev=node;
    inorder(rightchild);
}
    TreeNode* increasingBST(TreeNode* root){
        inorder(root);
        return newroot;
    }
};
class Solution{
public:
int prev;
int ans=INT_MAX;
bool hasprev=false;
void inorder(TreeNode*node){
    if(node==nullptr){
        return;
    }
    inorder(node->left);
    if(hasprev){
        ans=min(ans,node->val-prev);
    }
    prev=node->val;
    hasprev=true;
    inorder(node->right);
}
    int minDiffInBST(TreeNode* root){
        inorder(root);
        return ans;
    }
};
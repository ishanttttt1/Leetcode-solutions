class Solution{
public:
int count=0;
int ans=0;
void Inorder(TreeNode*root,int k){
        if(root==nullptr){
            return;
        }
        Inorder(root->left,k);
        count++;
        if(count==k){
            ans=root->val;
        }
        Inorder(root->right,k);
}
    int kthSmallest(TreeNode* root, int k){
        Inorder(root,k);
        return ans;
    }
};
class Solution{
public:
   bool checkTree(TreeNode* root){
        if(root==nullptr){
            return false;
        }
        int sum=(root->left->val+root->right->val);
        if(sum==root->val){
            return true;
        }
    return false;
    }
};
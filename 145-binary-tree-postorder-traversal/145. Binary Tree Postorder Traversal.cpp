class Solution{
public: vector<int>result;
void postordertraversal(TreeNode*node){
if(node==nullptr){
            return;
        }
        postordertraversal(node->left);
        postordertraversal(node->right);
        result.push_back(node->val);
}
    vector<int> postorderTraversal(TreeNode* root){
        postordertraversal(root);
        return result;
    }
};
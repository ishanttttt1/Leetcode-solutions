class Solution{
public:
vector<int>result;
void allelements(TreeNode*root){
    if(root==nullptr){
        return;
    }
    result.push_back(root->val);
    allelements(root->left);
    allelements(root->right);
}
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2){
        allelements(root1);
        allelements(root2);
        sort(result.begin(),result.end());
        return result;
    }
};
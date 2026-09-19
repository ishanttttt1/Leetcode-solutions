class Solution{
public:
void leafchecker(TreeNode*node,vector<int>&ans){
    if(node==nullptr){
        return;
    }
    if(node->left==nullptr&&node->right==nullptr){
        ans.push_back(node->val);
    }
    leafchecker(node->left,ans);
    leafchecker(node->right,ans);
}
    bool leafSimilar(TreeNode* root1, TreeNode* root2){
        vector<int>ans1;
        vector<int>ans2;
        leafchecker(root1,ans1);
        leafchecker(root2,ans2);
        return ans1==ans2;
    }
};
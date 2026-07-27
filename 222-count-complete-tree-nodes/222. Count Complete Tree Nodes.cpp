class Solution{
public:
int countNodes(TreeNode* root){
        if(root==nullptr){
            return 0;
        }
    int leftdfs=countNodes(root->left);
    int rightdfs=countNodes(root->right);
 return 1+leftdfs+rightdfs;    
    }
};
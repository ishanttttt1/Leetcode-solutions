class Solution{
public:
    TreeNode*Deepestnode(TreeNode*node,int &height){
        if(node==nullptr){
            height=0;
            return nullptr;
        }
        if(node->left==nullptr&&node->right==nullptr){
            height=1;
            return node;
        }
        int leftheight=0;
        int rightheight=0;
        TreeNode*left=Deepestnode(node->left,leftheight);
        TreeNode*right=Deepestnode(node->right,rightheight);
        if(leftheight>rightheight){
            height=leftheight+1;
            return left;
        }
        if(rightheight>leftheight){
            height=rightheight+1;
            return right;
        }
        height=leftheight+1;
        return node;
    }
    TreeNode* subtreeWithAllDeepest(TreeNode* root){
              int height=0;
              return Deepestnode(root,height);
    }
};
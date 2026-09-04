class Solution{
public:
    string helper(TreeNode*node){
        if(node==nullptr){
            return"";
        }
        string root=to_string(node->val);
        string lefttree=helper(node->left);
        string righttree=helper(node->right);
        if(node->left==nullptr&&node->right!=nullptr){
            return root + "()"+"("+ righttree +")";
        }
        else if(node->left!=nullptr&&node->right==nullptr){
            return root + "(" + lefttree + ")";
        }
        else if(node->left!=nullptr&&node->right!=nullptr){
        return root + "(" + lefttree + ")"+"(" + righttree + ")";
        }
        else {
            return root;
        }
    }
    string tree2str(TreeNode* root){
        return helper(root);
    }
};
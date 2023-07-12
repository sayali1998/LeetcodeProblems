class Solution {
public:
    int height(TreeNode* root){
        if(root == nullptr)
            return 0;
        else
            return 1+ max(height(root->left), height(root->right));
    }

    bool isBalanced(TreeNode* root) {
        if(root == nullptr)
            return true;
        else{
            if(abs(height(root->left) - height(root->right)) <= 1 && isBalanced(root->left) && isBalanced(root->right))
                return true;
            else
                return false;
        }
    }
};
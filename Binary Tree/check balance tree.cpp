int max_hgt(TreeNode*root){
    if(root == NULL)
    return 0;
    int left=max_hgt(root->left);
    int right =max_hgt(root->right);
    return 1+max(left,right);

}

    bool isBalanced(TreeNode* root) {
        if(root==NULL)
        return 1;
  int left=isBalanced(root->left);
    int right=isBalanced(root->right);
        if(left && right &&abs(max_hgt(root->left)-max_hgt(root->right))<=1)
        return 1;
        else
        return 0;
      
    }
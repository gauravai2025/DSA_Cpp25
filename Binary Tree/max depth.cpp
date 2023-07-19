int max_hgt(Node*root){
    if(root == NULL)
    return 0;
    int left=max_hgt(root->left);
    int right =max_hgt(root->right);
    return 1+max(left,right);

}
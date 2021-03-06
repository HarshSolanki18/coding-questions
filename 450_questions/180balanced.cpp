//Function to check whether a binary tree is balanced or not.
int height(Node *root){
    if(root==NULL) return 0;
    int lh=height(root->left);
    int rh=height(root->right);
    
    return max(lh,rh)+1;
}
bool isBalanced(Node *root)
{
    //  Your Code here
    if(root==NULL){
        return true;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    if(abs(lh-rh)<=1 && isBalanced(root->left) && isBalanced(root->right)){
        return true;
    }else{
        return false;
    }
    
}

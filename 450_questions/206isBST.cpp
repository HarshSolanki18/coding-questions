  bool isGreater(Node *root,int val){
        if(root==NULL) 
        return true;
        if(val<root->data and isGreater(root->left,val) and isGreater(root->right,val)) 
        return true;
        else 
        return false;
    }
    
    bool isLesser(Node *root,int val){
        if(root==NULL) return true;
        if(val>=root->data and isLesser(root->left,val) and isLesser(root->right,val)) return true;
        else return false;
    }
    
    bool isBST(Node* root) 
    {
        // Your code here
        if(root==NULL) return true;
        if(isLesser(root->left,root->data) and isGreater(root->right,root->data) and isBST(root->left) and isBST(root->right))
            return true;
        else return false;
    }
};
int height(struct Node* node){
        // code here 
        if(node==NULL) return 0;
        int leftH=height(node->left);
        int rightH=height(node->right);
        
        return max(leftH,rightH)+1;
    }


int diameter(Node* root)
    {
    // Your code here
    if(root==NULL) return 0;
    int lefth=height(root->left);
    int righth=height(root->right);
    
    int ld=diameter(root->left);
    int rd=diameter(root->right);
    return max({lefth+righth+1,ld,rd});
    
    }

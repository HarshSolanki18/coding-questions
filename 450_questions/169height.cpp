int height(struct Node* node){
        // code here 
        if(node==NULL) return 0;
        int leftH=height(node->left);
        int rightH=height(node->right);
        
        return max(leftH,rightH)+1;
    }
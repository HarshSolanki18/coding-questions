 //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      //Your code here
      vector <int> v;
      queue <Node *> q;
      if(node==NULL) return v;
      q.push(node);
      while(!q.empty()){
          Node * curr=q.front();
          v.push_back(curr->data);
          if(curr->left!=NULL) q.push(curr->left);
          if(curr->right!=NULL) q.push(curr->right);
          q.pop();
      }
      return v;
    }
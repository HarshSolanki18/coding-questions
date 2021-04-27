vector<int> reverseLevelOrder(Node *node)
{
    // code 
    vector <int> v;
      queue <Node *> q;
      stack <Node *> s;
      if(node==NULL) return v;
      q.push(node);
      while(!q.empty()){
          Node * curr=q.front();
           s.push(curr);
  
        
        if (curr->right)
            q.push(curr->right); // NOTE: RIGHT CHILD IS ENQUEUED BEFORE LEFT
  
        /* Enqueue left child */
        if (curr->left)
            q.push(curr->left);
          
          q.pop();
      }
      while(!s.empty()){
          Node *curr=s.top();
          v.push_back(curr->data);
          s.pop();
      }
      return v;
}
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     unordered_set<int> st;
     struct Node *curr=head->next,*pre=head;
     st.insert(head->data);
     while(curr!=NULL){
         if(st.find(curr->data)!=st.end()){
             pre->next=curr->next;
             curr=curr->next;
         }else{
             st.insert(curr->data);
             curr=curr->next;
         pre=pre->next;
         }
         
     }
     return head;
    }
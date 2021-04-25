struct node *reverse (struct node *head, int k)
    { 
        struct node *curr=head,*next=NULL,*pre=NULL,*temp=NULL;
        
        
        // Complete this method
        int count=0;
        if(head==NULL){
            return NULL;
        }
        while(curr!=NULL && count<k){
            
            next=curr->next;
            curr->next=pre;
            pre=curr;
            curr=next; 
            count++;
            }
        if(next!=NULL){
            head->next=reverse(next,k);
        }
        return head=pre;
    }
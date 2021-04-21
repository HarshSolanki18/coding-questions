struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
    struct Node *pre=NULL,*cur=head,*next=NULL;
    if(head==NULL){
        return NULL;
    }
    while(cur!=NULL){
       next=cur->next;
        cur->next=pre;
     pre=cur;
               cur=next;
    }
    return head=pre;
    }
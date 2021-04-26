int getNthFromLast(Node *head, int n)
{
       // Your code here
       int len=0;
       struct Node *curr=head,*temp=head;
       while(curr!=NULL){
           curr=curr->next;
           len++;
       }
       if(n>len){
           return -1;
       }
       int c=len-n;
       while(c--){
           temp=temp->next;
       }
       return temp->data;
}

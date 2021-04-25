//Traverse over the linked list using a pointer.
//While iterating if data at current node and next node are same, store the node next to the next node of current node in link of current node.
//Else we move the pointer to next node.

Node *removeDuplicates(Node *head)
{
 // your code goes here
 struct Node *curr=head;
 while(curr->next!=NULL){
     if(curr->data==curr->next->data){
         curr->next=curr->next->next;
     }else{
         curr=curr->next;
     }
 }
 return head;
}

/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

int lenght(Node *head){
    int c=0;
    Node *temp=head;
    while(temp!=NULL){
        c++;
        temp=temp->next;
    }
    return c;
}

//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    int m=lenght(head1);
    int n=lenght(head2);
    int d=abs(m-n);
    Node * b=head2,*a=head1;
    if(m>=n){
        for(int i=0;i<d;i++){
            if(a==NULL){
                return -1;
            }
            a=a->next;
        }
        
        while(a!=NULL && b!=NULL){
            if(a==b){
                return a->data;
                
            }
            a=a->next;
            b=b->next;
        }
        return -1;
    }else{
    for(int i=0;i<d;i++){
        if(b==NULL){
            return -1;
        }
            b=b->next;
        }
        
        while(a!=NULL && b!=NULL){
            if(a==b){
                return a->data;
                
            }
            a=a->next;
                b=b->next;
        }
        return -1;
        
    }
    
    
    

}


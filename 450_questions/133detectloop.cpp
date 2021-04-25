//Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
        struct Node *slow=head,*fast=head;
        if(head==NULL){
            return false;
        }
        while(fast!=NULL and fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast){
                return true;
            }
        }
        return false;
    }
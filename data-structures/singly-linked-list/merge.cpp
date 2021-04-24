#include<bits/stdc++.h>
using namespace std;
#define ll                  long long int
#define vi                  vector <long long int>
#define inf                 1e18
#define mod                 1000000007
#define loop(i,a,b)         for(int i=(a);i<=(b);i++)
#define pb                  push_back
#define vs                  vector <string>

struct node{
    int data;
    struct node *next;
};


void traverse(struct node * head){
    cout<<endl<<"Element of LL :";
    struct node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

struct node * insertAtLast(struct node * head,int data){
    struct node *curr=head,*newNode=(struct node *)malloc(sizeof(struct node ));
    newNode->data=data;
    newNode->next=NULL;
    if(head==NULL){
        return head=newNode;
    }else{
        while(curr->next!=NULL){
            curr=curr->next;
        }
        curr->next=newNode;
        return head;
    }
}
struct node *merge(struct node *head1,struct node *head2){
    struct node *head=NULL;
    while(head1!=NULL and head2!=NULL){
        if(head1->data<=head2->data){
            head=insertAtLast(head,head1->data);
            head1=head1->next;
        }else{
            head=insertAtLast(head,head2->data);
            head2=head2->next;
        }
    }
    while(head1!=NULL){
        head=insertAtLast(head,head1->data);
        head1=head1->next;
    }
    while(head2!=NULL){
        head=insertAtLast(head,head2->data);
        head2=head2->next;
    }
    return head;

}

int main(){
    int n,data;
    struct node *head1=NULL,*head2=NULL,*head=NULL; 
    cin>>n;
    loop(i,0,n-1){
        cin>>data;
       head1=insertAtLast(head1,data);
    }
    cin>>n;
    loop(i,0,n-1){
        cin>>data;
       head2=insertAtLast(head2,data);
    }
    cout<<endl<<"LL1"<<endl;
    traverse(head1);
    cout<<endl<<"LL2"<<endl;
    traverse(head2);
    cout<<endl<<"Merged LL"<<endl;
    head=merge(head1,head2);
    traverse(head);
    return 0;
}
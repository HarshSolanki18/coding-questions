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

struct node *insertAtN(struct node * head,int data,int pos){
   struct node *curr=head,*newNode=(struct node *)malloc(sizeof(struct node ));
   newNode->data=data;
   newNode->next=NULL;
   if(head==NULL){
       cout<<"Empty List";
       return head;
   }
   if(pos==0){
       newNode->next=head;
       return head=newNode;
   }
   pos=pos-1;  //we have to stop at the node before pos to perform the operation
   while(curr->next!=NULL and pos!=0){
       curr=curr->next;
       pos--;
   }
   if(pos!=0){
       cout<<"Position does not exist";
       return head;
   }else{
       newNode->next=curr->next;
       curr->next=newNode;
       return head;
   }
}

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
int main(){
    int n,data,pos;
    struct node *head=NULL;
    cin>>n;
    loop(i,0,n-1){
        cin>>data;
       head=insertAtLast(head,data);
    }
    traverse(head);
    cout<<"enter position and data"<<endl;
    cin>>pos>>data;
    head=insertAtN(head,data,pos);
    traverse(head);
    return 0;
}
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

void mid(struct node *head){
    struct node *fast=head,*slow=head;
    while(fast!=NULL and fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<"mid node value: "<<slow->data;
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
    int n,data;
    struct node *head=NULL;
    cin>>n;
    loop(i,0,n-1){
        cin>>data;
       head=insertAtLast(head,data);
    }
    traverse(head);
    mid(head);
    return 0;
}
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

//Rotate the linked list by k
struct node *Rotate(struct node *head,int k){
    int len=0,pos;
    struct node *temp=head,*curr=head;
    while(temp->next!=NULL){
        len++;
        temp=temp->next;
    }
    len++;
    cout<<"length :"<<len<<endl;
    temp->next=head;
    k=k%len;
    cout<<"k :"<<k<<endl;
    pos=len-k-1;
    cout<<"pos :"<<pos<<endl;
    while(pos--){
        curr=curr->next;
    }
    head=curr->next;
    curr->next=NULL;
    return head;
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
    int n,data,k;
    struct node *head=NULL;
    cin>>n;
    loop(i,0,n-1){
        cin>>data;
       head=insertAtLast(head,data);
    }
    traverse(head);
    cout<<endl<<"Enter the value of k"<<endl;
    cin>>k;
    head=Rotate(head,k);
    cout<<"After Rotating "<<endl;
    traverse(head);
    return 0;
}
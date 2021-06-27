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


//find starting point of loop hashing method
// O(n)-time    O(n)-space

node *findStart(node * head){
    unordered_map<node *,int> mp;
    node *temp=head;
    while(temp!=NULL){
        mp[temp]++;
        if(mp[temp]>1){
            return temp;
        }
        temp=temp->next;
    }
    return NULL;
}

//Find using different method 



node *loopPoint=NULL;
int counter=0;
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
        counter++;
        return head=newNode;
    }else{
        while(curr->next!=NULL){
            curr=curr->next;
        }
        curr->next=newNode;
        counter++;
        if(counter==3){
            loopPoint=newNode;
        }
        if(counter==5){
            newNode->next=loopPoint;
        }
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
    node *p=findStart(head);
    cout<<p->data;
    //traverse(head);
    return 0;
}
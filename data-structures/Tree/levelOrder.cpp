#include<bits/stdc++.h>
using namespace std;
#define ll                  long long int
#define vi                  vector <long long int>
#define inf                 1e18
#define mod                 1000000007
#define loop(i,a,b)         for(int i=(a);i<=(b);i++)
#define pb                  push_back
#define vs                  vector <string>

struct BST{
   int data;
   BST *left=NULL;
   BST *right=NULL;
};

void traverse(BST *root){
    if(root!=NULL){
        traverse(root->left);
        cout<<root->data<<" ";
        traverse(root->right);
    }else{
        return ;
    }
}

void levelOrder(BST *root){
    if(root==NULL) return;
   queue <BST*> q;
   q.push(root);
   while(!q.empty()){
       BST *curr=q.front();
       cout<<curr->data<<" ";
       if(curr->left!=NULL) q.push(curr->left);
       if(curr->right!=NULL) q.push(curr->right);
       q.pop();
   }
}
BST *Insert(BST *root,int data){
    if(root==NULL){
        BST *newNode=new BST();
        newNode->data=data;
        newNode->left=NULL;
        newNode->right=NULL;
        root=newNode;
    }else if(root->data>=data){
        root->left=Insert(root->left,data);
    }else{
        root->right=Insert(root->right,data);
    }
    return root;
}
int main(){
    BST *root =NULL;
    root=Insert(root,15);
    root=Insert(root,8);
    root=Insert(root,10);
    root=Insert(root,20);
    root=Insert(root,25);
    root=Insert(root,18);
    traverse(root);
    cout<<endl<<"Level order traversal"<<endl;
    levelOrder(root);
    return 0;
}
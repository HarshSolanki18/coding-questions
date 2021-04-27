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

bool isSubTreeGreater(BST *root,int value){
    if(root==NULL) return true;
    if(root->data>=value and isSubTreeGreater(root->left,value) && isSubTreeGreater(root->right,value)){
        return true;
    }else return false;
}

bool isSubTreeLesser(BST *root,int value){
    if(root==NULL) return true;
    if(root->data<=value and isSubTreeLesser(root->left,value) && isSubTreeLesser(root->right,value)){
        return true;
    }else return false;
}

bool isBST(BST *root){
    if(root==NULL) return true;
    if(isSubTreeLesser(root->left,root->data) && isSubTreeGreater(root->right,root->data)&& isBST(root->left) && isBST(root->right)){
        return true;
    }else return false;
}
void traverse(BST *root){
    if(root!=NULL){
        traverse(root->left);
        cout<<root->data<<" ";
        traverse(root->right);
    }else{
        return ;
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
    cout<<endl<<isBST(root);
    return 0;
}
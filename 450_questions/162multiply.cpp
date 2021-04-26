long long  multiplyTwoLists (Node* l1, Node* l2)
{
  //Your code here
  long long int mod=1000000007;
  struct Node *curr1=l1,*curr2=l2;
  long long int num1=0,num2=0;
  while(curr1!=NULL){
      num1=((num1*10)%mod+(curr1->data)%mod)%mod;
      curr1=curr1->next;
      
  }
  while(curr2!=NULL){
      num2=((num2*10)%mod+(curr2->data)%mod)%mod;
      curr2=curr2->next;
  }
    long long int ans=((num1%mod)*(num2%mod))%mod;
    return ans;
  
}
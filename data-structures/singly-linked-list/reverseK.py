class Node:
    def __init__(self,val):
        self.data=val
        self.next=None

        

class LL:
    def __init__(self):
        self.head=None

    def insert(self,data):
        newNode=Node(data)
        if self.head is None:
            self.head=newNode
            return
        curr=self.head
        while(curr.next):
            curr=curr.next
        curr.next=newNode        

    def traverse(self):
        temp=self.head
        if temp is None:
            print("Empty List",sep=" ")
            return
        while(temp):
            print(temp.data,sep=" ")
            temp=temp.next

    def reverseK(self,head,k):
        pre=None
        nex=None
        curr=head
        count=0
        if curr is None:
            return
        while(curr is not None and count<k):
            nex=curr.next
            curr.next=pre
            pre=curr
            curr=nex
            count=count+1

        if(nex):
            self.head.next=self.reverseK(nex,k)
        self.head = pre 
        return self.head             



if __name__ =='__main__':
    ll=LL()
    ll.insert(1)
    ll.insert(2)
    ll.insert(3)
    ll.insert(4)

    ll.traverse()
    ll.head=ll.reverseK(ll.head,2)
    ll.traverse()
    

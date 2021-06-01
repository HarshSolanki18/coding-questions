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

    def reverse(self,p):
        temp=p
        if temp.next is None:
            self.head=temp
            return
        self.reverse(temp.next)
        q=temp.next
        q.next=temp
        temp.next=None              
if __name__ =='__main__':
    ll=LL()
    ll.insert(1)
    ll.insert(2)
    ll.insert(3)

    ll.traverse()
    ll.reverse(ll.head)
    ll.traverse()
    

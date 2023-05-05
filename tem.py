class Node:
  def __init__(self,data):
    self.data=data
    self.next=None

class linkedlist:
  def _init_(self):
    self.head=None

  def printList(self):
        temp = self.head
        while (temp!=None):
            print(temp.data)
            temp = temp.next

llist1=linkedlist()
llist2=linkedlist()
llist3=linkedlist()
llist1.head=Node(1)
two1=Node(2)
three1=Node(3)
llist2.head=Node(1)
two2=Node(2)
three2=Node(3)
llist3.head=Node(0)
two3=Node(0)
three3=Node(0)
llist1.head.next=two1
two1.next=three1
llist2.head.next=two2
two2.next=three2
llist3.head.next=two3
two3.next=three3
a=llist1.head
b=llist2.head
c=llist3.head
while (a!=None):
  c.data=a.data+b.data
  c=c.next
  b=b.next
  a=a.next

llist3.printList();
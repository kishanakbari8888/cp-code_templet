#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    int priority;
    Node* next;
    Node(int val, int pri){

        value=val;
        priority=pri;
        next=NULL;
    }
};

class priorityQueue{
    public:
    int si=0;
    Node* list;

    priorityQueue(){
        list=NULL;
    }

    void push(int val, int pri){
        
        Node* first=list;
        Node* teem = new Node(val,pri);

        if(list==NULL){
            list=teem;
            return;
        }

        if(list->priority>pri){
            teem->next=list;
            list=teem;
        }else{
            while(first->next!=NULL && first->next->priority<=pri){
                first=first->next;
            }
            teem->next=first->next;
            first->next=teem;
        }

        si++;
    }

    int peek()
    {
        return list->value;
    }
 
    void pop()
    {
        Node* tem = list;
        list=list->next;
        si--;
        delete tem;
    }

    int isEmpty()
    {
        return si;
    }

    void display()
    {
        Node* tem=list;
        while(tem!=NULL)
        {
            cout<<tem->value<<" ";
            tem=tem->next;
        }
        cout<<endl;
    }
};

int main(){
    priorityQueue* pQueue = new priorityQueue();

    pQueue->push(2,10);
    pQueue->push(5,20);
    pQueue->push(9,30);
    pQueue->push(5,10);
    pQueue->display();
    pQueue->pop();
    pQueue->display();
    return 0;
}
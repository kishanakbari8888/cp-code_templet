#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

class Deque{
    public:
    Node* first;
    Node* tail;
    int size_=0;

    Deque(){
        first=NULL;
        tail=NULL;
    }

    void push_back(int val){
        Node* n = new Node(val);

        if(first==NULL){
            first=n;
            tail=n;
            return;
        }

        Node* tem = first;
        while(tem->next!=NULL)
        {
            tem=tem->next;
        }
        tem->next=n;
        tail=tem->next;
    }

    void pop_back(){
        if(first==NULL){
            return;
        }
        Node* tem=first;
        while(tem->next->next!=NULL){
            tem=tem->next;
        }
        tem->next=NULL;
        tail=tem;
    }

    void pop_front(){
        if(first==NULL){
            return;
        }
        first=first->next;
    }

    void push_front(int val){
        Node* n = new Node(val);
        n->next=first;
        first=n;
    }

    void print(){
        Node* tem=first;
        while(tem!=NULL){
            cout<<tem->data<<" ";
            tem=tem->next;
        }
        cout<<endl;
    }
};

int main(){
    Deque* dq = new Deque();

    dq->push_back(2);
    
    dq->push_back(3);
    
    dq->push_back(4);
    
    dq->pop_back();
    
    dq->print();
    
    dq->push_front(4);
    
    dq->pop_front();
    
    dq->print();
    
    dq->pop_front();
    
    dq->print();
    
    dq->pop_front();
    
    dq->print();

    return 0;
}
#include<bits/stdc++.h>
#include "string.h"
using namespace std;

class node{

public:
    int data;
    node *next;
    node(int d)
    {
        data = d;
        next=NULL;
    }
};

node* insertbig(node* list, int val)
{
    node* tem = new node(val);
    tem->next = list;
    return tem;
}

void print(node*list)
{
    while(list!=NULL)
    {
        cout<<list->data<<" ";
        list = list->next;
    }
}

int main()
{
    node *list = new node(10);
    list->next = new node(20);
    list->next->next = new node(30);
    list->next->next->next = new node(40);
    list->next->next->next->next = new node(50);

    list = insertbig(list,5);
    print(list);

    

    
    
    
    return 0;
}
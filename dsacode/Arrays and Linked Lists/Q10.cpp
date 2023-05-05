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

void replace(node* list,int index,int val)
{
    int ix = 0;
    while(list!=NULL)
    {
        ix++;
        if(ix==index)
            list->data = val;
        list = list->next;
    }
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

    replace(list,3,50);
    print(list);
    
    return 0;
}
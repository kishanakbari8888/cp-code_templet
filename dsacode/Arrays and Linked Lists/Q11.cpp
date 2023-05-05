#include<bits/stdc++.h>
#include "string.h"
using namespace std;

class node{

public:
    int data;
    node *next;
    node *pre;
    node(int d)
    {
        data = d;
        next=NULL;
        pre=NULL;
    }
};

void apped(node* list,int val)
{
    while(list->next!=NULL)
    {
        list = list->next;
    }

    list->next = new node(val);
    list->next->pre = list;
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
    node *tem = list;
    node *head = list;
    int c; 
    while(cin>>c)
    {
        list->next = new node(c);
        list->next->pre = tem;
        tem = list->next;
        list = list->next;
    }

    print(head);

        
    
    
    return 0;
}
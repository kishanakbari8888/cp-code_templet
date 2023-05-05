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

void remove(node* list,int val)
{
    node *tem = NULL;
    while(list!=NULL)
    {
        if(list->data == val)
        {
            tem->next = list->next;
            return ;
        }
        tem = list;
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

    remove(head,0);
    print(head);

    
    
    return 0;
}
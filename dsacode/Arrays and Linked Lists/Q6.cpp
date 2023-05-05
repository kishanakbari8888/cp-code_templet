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

int find(node* list,int val)
{
    int ix = 0;
    while(list!=NULL)
    {
        ix++;
        if(val==list->data)
            return ix;
        list = list->next;
    }

    return -1;
}

int main()
{
    node *list = new node(10);
    list->next = new node(20);
    list->next->next = new node(30);
    list->next->next->next = new node(40);
    list->next->next->next->next = new node(50);

    cout<<find(list, 10)<<endl;
    cout<<find(list, 55)<<endl;

    
    
    
    return 0;
}
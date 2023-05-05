#include<bits/stdc++.h>
using namespace std;


class listt
{
public:
    int data;
    listt* next;
    listt(int data)
    {
        this->data = data;
        next = NULL;
    }
};


class queuee{
public:
    listt* l;
    int si = 1;
    listt* head;
    queuee(int d)
    {
        l = new listt(d);
        head = l;
    }

    int leg(){
        return si;
    }

    void push(int d)
    {
        l->next = new listt(d);
        l = l->next;
        si++;
    }

    int peek()
    {
        return head->data;   
    }


    void pop()
    {
        if(!si)
            return ;

        head = head->next;
        si--;
    }

};

int main()
{

    queuee q(-1);
    cout<<q.leg()<<endl;
    q.push(5);
    q.push(55);
    q.push(100);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek();

    return 0;
}
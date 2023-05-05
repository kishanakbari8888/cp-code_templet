#include<bits/stdc++.h>
using namespace std;


class listt
{
public:
    int data;
    listt* pre;
    listt(int data)
    {
        this->data = data;
        pre = NULL;
    }
};


class stackk{
public:
    listt* l;
    int size = 0;

    stackk(listt* li)
    {
        l = li;
    }

    int leg()
    {
        return size;
    }

    void push(int d)
    {
        listt* tem = new listt(d);
        tem->pre = l;
        l = tem;
        size++;
    }

    void pop()
    {
        if(!size)
            return ;
        l = l->pre;
        size--;
    }

    int peek()
    {
        if(!size)
            return -1;
        return l->data;
    }
};


int main()
{
    listt* li;
    stackk s(li);

    s.push(10);
    s.push(20);
    cout<<s.peek()<<endl;
    s.push(40);
    s.push(50);
    s.pop();
    cout<<s.peek()<<endl;
    s.push(60);

    return 0;
}
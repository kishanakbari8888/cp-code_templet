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

    int n; cin>>n;
    char c; cin>>c;
    s.push((int)c);
    for (int i = 0; i < n-1; ++i)
    {
        cin>>c;
        if(c=='(' || c=='[' || c=='{')
            s.push((int)c);
        if(s.leg()>0 && s.peek()==(int)'(' && c==')')
            s.pop();
        if(s.leg()>0 && s.peek()==(int)'[' && c==']')
            s.pop();
        if(s.leg()>0 && s.peek()==(int)'{' && c=='}')
            s.pop();
    }

    if(s.leg())
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;


    return 0;
}
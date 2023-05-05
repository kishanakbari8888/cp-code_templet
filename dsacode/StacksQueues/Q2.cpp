#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};

class stackk{
public:
    int si=0;
    node* head;

    stackk(){
        head=NULL;
    }

    void push(int val){
        node* n = new node(val);
        if(isEmpty())
        {
            head = n;
        }
        else
        {
            n->next=head;
            head=n;
        }
        si++;
    }

    void pop(){
        if(isEmpty()){
            cout<<"Stack is Full"<<endl;
        }
        else
        {
            head=head->next;
        }
        si--;
    }

    int size()
    {
        return si;
    }

    bool isEmpty()
    {
        return si==0;
    }

    int top()
    {
        return !isEmpty() ? head->data : -1;
    }

    void display()
    {
        node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }

};


int postfixEvaluation(string s){

    stackk st;

    if (!st.size()){
        return -1;
    }

    for (int i=0;i<s.size();i++){
        if(s[i]==' ')
            continue;
        else if(s[i]>='0' && s[i]<='9')
        {
            int val=0;
            while(s[i]>='0' && s[i]<='9')
            {
                val=val*10+(int)(s[i]-'0');
                i++;
            }
            i--;     
            st.push(val);
        }
        else
        {
            int val2=st.top(); st.pop();
            int val1=st.top(); st.pop();

            if(s[i]=='+')
                st.push(val1+val2);
            else if(s[i]=='-')
                st.push(val1-val2);
            else if(s[i]=='*')
                st.push(val1*val2);
            else if('/')
                st.push(val1/val2);;
        }
    }
    return st.top();

}

int32_t main(){

    cout<<postfixEvaluation("100 200 + 2 / 5 * 7 +")<<endl;
    
    return 0;
}
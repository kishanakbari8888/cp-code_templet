#include<bits/stdc++.h>
#include <stdio.h>
#include "string.h"
using namespace std;
#define int long long
#define ll long long
#define double long double
#define endl '\n' 
#define pb push_back
#define all(x) x.begin(),x.end() 
#define con(s1,s2) strstr(s1.c_str(),s2.c_str())
#define foreach(x,y) for(auto &x:y)
#define allr(x) x.rbegin(),x.rend()
#define sum(v) accumulate(all(v),(int)0)
#define ff first
#define ss second
#define pi pair<int,int>
const int M = 1e9+7;




class SuperClass
{
    public:

        SuperClass(int foo)
        {
            cout<<"SuperClass"<<endl;
            // do something     
        }
};

class SubClass : public SuperClass
{
    public:

        SubClass(int foo, int bar)
        : SuperClass(foo)    // Call the superclass constructor in the subclass' initialization list.
        {
            cout<<"SubClass"<<endl; 
        }
};



class ab{

public:
    ab()
    {
        cout<<"ab "<<endl;
    }
    ab(int bb)
    {
        cout<<bb<<endl;
    }

    int get() 
    {
        return -10;
    }

    int a = 10;
private: 
    int b = 20;
protected:
    int c = 20;

};



class ac:public ab{
public:
    ac() : ab(-1)
    {
        cout<<"ac"<<endl;
    }

    int aa = 10;
    int get() 
    {
        // cout<<a<<endl;
        return -1;
    }
};

class ad:public ac{
public:
    ad()
    {
        cout<<"ad"<<endl;
    }
    int bb = 10;
};


class Base {
public:
    Base()
    {
        cout << "Constructor of base called\n";
    }
    int x;
    virtual int fun(){
        return 5;
    }
};
 
class Derived : public Base {
public:
    int y = 20;
    int fun()
    {
        return 10;
    }
};



class sig{
private:
    sig()
    {

    }
public:
    static sig *s;
    static sig* getsig(){
        if(s==NULL)
            s = new sig(); 
        return s;
    }
};

sig *sig ::s = NULL;
// sig *s = sig::getsig();



class link{
public:
    int val = 11;
    link *next;
    link(int d)
    {
        val = d;
        next = NULL;
    }
private:

protected:
};



class temp{

public:
    static int data;

    static int getdata()
    {
        return 10ll;
    }

};


int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    cout<<setprecision(10)<<fixed;

    // SubClass s(10,100);
    Derived d;
    Base *b = &d;
    cout<<b->fun()<<endl; // 10
    cout<<d.fun()<<endl;
    // cout<<b->y<<endl; // error


        
    // ad a;
    // cout<<a.get();


    cout<<temp::getdata()<<endl;
    return 0;
    
}
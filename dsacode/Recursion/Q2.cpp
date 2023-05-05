#include<bits/stdc++.h>
#include "string.h"
using namespace std;

void fourth(){
    cout<<"I am the Fourth"<<endl;
}

void third(){
    fourth();
    cout<<"I am the Third"<<endl;
}

void second(){
    third();
    cout<<"I am the Second"<<endl;
}

void first(){
    second();
    cout<<"I am the First"<<endl;
}

int32_t main(){
    first();
    return 0;
}

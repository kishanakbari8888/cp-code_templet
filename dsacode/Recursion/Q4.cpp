#include<bits/stdc++.h>
#include "string.h"
using namespace std;

int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    if(n==2){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}

int main(){
    for(int i=0;i<10;i++)
        cout<<fib(i)<<" ";

    cout<<endl;

    return 0;
}
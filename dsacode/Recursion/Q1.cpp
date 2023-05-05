#include<bits/stdc++.h>
#include "string.h"
using namespace std;

int fact(int n){
    if(n%1<0 || n<0){
        cout<<("Invalid Input")<<endl;
        return 0;
    }
    if(n==0 || n==1){
        return 1;
    }
    return n*fact(n-1);
}

int32_t main(){

    cout<<fact(5)<<endl;
    cout<<fact(0)<<endl;
    cout<<fact(1.3)<<endl;
    cout<<fact(-3)<<endl;
    return 0;
}

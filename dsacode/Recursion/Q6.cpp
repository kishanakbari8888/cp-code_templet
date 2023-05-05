#include<bits/stdc++.h>
using namespace std;

int HCF(int a, int b){
    if(a==0)
        return b;
    if(b==0)
        return a;
    if(a==b)
        return a;
    if(a>b)
        return HCF(a-b,b);

    return HCF(a,b-a);
}

int main(){

    cout<<HCF(2,4)<<endl;
    return 0;
}
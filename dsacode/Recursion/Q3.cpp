#include<bits/stdc++.h>
#include "string.h"
using namespace std;

int addup(int i){
    if(i==0)
        return i;

    return i+addup(i-1);
}

int32_t main(){

    cout<<addup(5)<<endl;
    return 0;
}

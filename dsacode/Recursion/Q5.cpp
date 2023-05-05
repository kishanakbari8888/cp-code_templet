#include<bits/stdc++.h>
#include "string.h"
using namespace std;

int prod(int arr[], int n){
    if(n==-1)
        return 1;

    return arr[n]*prod(arr,n-1);
}

int32_t main(){

    int arr[5] = {1,2,3,4,5};
    
    cout<<prod(arr,4)<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

bool isPalRec(string st, int s, int e){
    if(s==e)
        return true;
    if(st[s]!=st[e])
        return false;
    if(s<e+1)
        return isPalRec(st,s+1,e-1);
    return true;
}

bool isPalindrome(string s, int n){
    if(n==0)
        return true;
    return isPalRec(s,0,n-1);
}

int32_t main(){

    cout<<isPalindrome("malayala",8)<<endl;
    return 0;
}
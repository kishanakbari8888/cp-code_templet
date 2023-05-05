#include<bits/stdc++.h>
using namespace std;

string reverse(string s,int i, int n){

    if(s.length()==0){
        return s;
    }
    string ros = s.substr(1);
    return reverse(ros,i+1,n)+s[0];
}

int main(){
    
    cout<<reverse("Jevin",0,5)<<endl;
    return 0;
}
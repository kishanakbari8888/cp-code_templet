#include<bits/stdc++.h>
#include <stdio.h>
// #include "string.h"
#include "insthandler.h"
using namespace std;

int main()
{

    ifstream re("asmcode.txt");
    ofstream we("asm2hex.txt");

    string s;

    while(getline(re,s))
    {
        getoutinhex(s,we);
    }
  

  	
    return 0;
}   
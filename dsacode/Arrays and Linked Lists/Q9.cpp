#include<bits/stdc++.h>
#include "string.h"
using namespace std;

void replce(vector<int> v,int index, int val)
{
    v[index] = val;
    return ;
}

void print(vector<int> v)
{
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
}


int32_t main()
{
    vector<int> v{6,3,4,8,20,60};

    replce(v,5,10);

    print(v);
        
    return 0;
}


#include<bits/stdc++.h>
#include "string.h"
using namespace std;

void pushback(vector<int> &v,int val)
{
    v.push_back(val);
}

int main()
{
    vector<int> v{2,5,3,4,6};
    v.pushback(val);

    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";

    
    
    return 0;
}
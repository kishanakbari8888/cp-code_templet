#include<bits/stdc++.h>
#include "string.h"
using namespace std;

void insatind(vector<int> &v,int index, int val)
{
    v.push_back(val);
    for(int i = v.size()-1; i>index; i--)
        swap(v[i],v[i-1]);
    return ;
}

int main()
{
    vector<int> v{1,2,3,4,5,6};

    insatind(v,2,10);
    
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    
    
    return 0;
}
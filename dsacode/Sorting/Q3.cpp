#include<bits/stdc++.h>
#include "string.h"
using namespace std;


void countSort(vector<int> &v,int exp)
{
    vector<int> ans(v.size()); 
    int count[10] = {0};

    for (int i = 0; i < v.size(); i++)
        count[(v[i] / exp) % 10]++;
 

    for (int i = 1; i < 10; i++)
        count[i] += count[i -1];

 
    for (int i = v.size() - 1; i >= 0; i--) {
        ans[count[(v[i] / exp) % 10]-1] = v[i];
        count[(v[i] / exp) % 10]--;
    }
 
    for (int i = 0; i < v.size(); i++)
        v[i] = ans[i];
}

void radixsort(vector<int> &v)
{
    int m = *max_element(v.begin(),v.end());
    int ex = 1;
    while(ex<=m)
    {
        countSort(v,ex);
        ex*=10;
    }
}
 
 
int32_t main()
{
    vector<int> v{2,10,5,90,40,20,155};     
 
    radixsort(v);
    
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";

    cout<<endl;


    return 0;
}
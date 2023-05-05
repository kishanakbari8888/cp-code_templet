#include<bits/stdc++.h>
#include "string.h"
using namespace std;


void heapify(vector<int> &v, int n, int i)
{
    int pre = i; 
    int left = 2*i+1;
    int right = 2*i+2; 

    if (left<n && v[left]<v[pre])
        pre = left;

    if (right<n && v[right]<v[pre])
        pre = right;

    if (pre!=i)
    {
        swap(v[i],v[pre]);
        heapify(v,n,pre);
    }
}

void heapSort(vector<int> &v)
{
    for (int i=v.size()/ 2 - 1; i>=0; i--)
        heapify(v, v.size(), i);

    for (int i=v.size() - 1; i>=0; i--) {
        swap(v[0], v[i]);
        heapify(v, i, 0);
    }
}

void print(vector<int> &v)
{
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    cout<<endl;
}

int main()
{
    vector<int> v{5,1,6,8,3,9,85,75,621,205};

    heapSort(v);

    print(v);
}


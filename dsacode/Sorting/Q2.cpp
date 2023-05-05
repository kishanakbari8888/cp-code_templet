#include<bits/stdc++.h>
using namespace std;

void quickSort(vector<int> &v, int low, int high) {
    if (low >= high) {
        return;
    }
    
    int left=low,right=high;

    int mid = low + rand()%(high-low);
    
    int pivot=v[mid];

    while(left<=right)
    {
        while(v[left]<pivot)
        {
             left++;
        }
        while(v[right]>pivot)
        {
           right--;
        }
        if (left<=right) 
        {
            swap(v[left],v[right]);
            left++;
            right--;
        }
    }
    quickSort(v,low,right);
    quickSort(v,left,high);
}

int main(){
    
    vector<int> v{2,6,1,10,5,50,600};
    quickSort(v,0,v.size());

    for (int i = 0; i < v.size(); ++i)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}



#include<bits/stdc++.h>
using namespace std;

int sar(vector<int> v,int val)
{
    for(int i=0; i<v.size(); ++i)
    {
        if(val==v[i])
            return i+1;
    }

    return -1;
}


int main()
{

    vector<int> v{1,2,3,4,5,6,7,8,9};

    cout<<sar(v,1)<<endl;
    cout<<sar(v,10)<<endl;   
    
    return 0;
}
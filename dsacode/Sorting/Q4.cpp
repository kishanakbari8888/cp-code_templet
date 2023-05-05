#include<bits/stdc++.h>

using namespace std;

bool hase[17] = {0}, hase1[37] = {0};

void insert (int val) 
{
    hase[(val)%17] = 1;
    hase1[(val)%37] = 1;
}

bool sarch(int val)
{
    return (hase[val%17] && hase1[val%37]);
}

int main(){
    vector<int> v = {133, 18, 92, 221, 174};

    for(int i=0; i<v.size(); i++)
        insert(v[i]);

    cout << sarch(100) << endl;
    cout << sarch(133) << endl;
    cout << sarch(174) << endl;

    return 0;
}

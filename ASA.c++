#include<bits/stdc++.h>
#include "string.h"
using namespace std;
#define ff first
#define ss second
int M = 1e9+7;

int32_t main()
{

    set<pair<int,vector<string>>> q;
    int slot = 1;
    int time;
    int com = 0;
    while(cin>>time)
    {
        cout
        char check; cin>>check;
        string A,B,Cin; cin>>A>>B>>Cin;
        string Sum,Cout; cin>>Sum>>Cout>>Cout;

        if(Cout.back()=='1')
        {
            pair<int,vector<string>> p;
            p.ff = time%1000;
            p.ss.push_back(A);
            p.ss.push_back(B);
            p.ss.push_back(Cin);
            p.ss.push_back(Sum);
            p.ss.push_back(Cout);
            q.insert(p);

            while(q.size()>10){
                q.erase(q.begin());
            }
            slot++;
        }

        if(com>10)
            break;


    }    

    while(q.size())
    {
        cout<<(*q.begin()).ff<<" ";
        vector<string> tem = (*q.begin()).ss;
        print(tem);
        q.erase(q.begin());
    }





    

    return 0;
}
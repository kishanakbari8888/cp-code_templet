#include<bits/stdc++.h>
#include <stdio.h>
#include "string.h"
using namespace std;
#define int long long
#define ll long long
#define double long double
#define endl '\n' 
#define pb push_back
#define all(x) x.begin(),x.end() 
#define con(s1,s2) strstr(s1.c_str(),s2.c_str())
#define foreach(x,y) for(auto &x:y)
#define allr(x) x.rbegin(),x.rend()
#define sum(v) accumulate(all(v),(int)0)
#define ff first
#define ss second
#define pi pair<int,int>
const int M = 1e9+7;   




int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    cout<<setprecision(10)<<fixed;

    int n; n = 1940;
    map<int,double> m;
    int mx = 0;

    for(int i=0; i<n; ++i)
    {
        int x,y; cin>>y>>x;
        m[x] =  y;
        mx = max(mx,y);
    }


    for(auto x:m)
    {
        x.ss = x.ss/(1.0*mx);
    }

    int com = 10000;
    while(com--)
    {
        int x = rand()%3001;
        if(m.count(x)==0)
        {
            com++;
            continue;
        }

        int nn = rand()%200;

        for(int i=0; i<nn; ++i)
        {
            int y = rand()%3000;
            if(m.count(y)==0)
            {
                i--;
                continue;
            }

            m[x]+=m[y]*(0.05);
        }

    }

    double mxx = 0;
    for(auto x:m)
    {
        mxx = max(mxx,x.ss);
        // cout<<x.ff<<" "<<x.ss<<endl;
    }

    for(auto x:m)
    {
        cout<<x.ff<<" "<<x.ss/(1.0*mxx)<<endl;
    }



    return 0;
}
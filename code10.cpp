#include<bits/stdc++.h>
#include <stdio.h>
#include "string.h"
using namespace std;
#define int long long 
#define endl '\n' 
#define pb push_back
#define all(x) x.begin(),x.end() 
#define con(s1,s2) strstr(s1.c_str(),s2.c_str())
#define foreach(x,y) for(auto &x:y)
#define allr(x) x.rbegin(),x.rend()
#define sum(a) accumulate(a.begin(), a.end(), (int)0)
#define ff first
#define ss second
#define vi vector<int> 
#define pi pair<int,int>
int M = 998244353;

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<setprecision(0)<<fixed;
    
    auto start=clock();
    srand(time(0));

    // cout<<"[";
    // for (int i = 0; i < 1e5; ++i)
    // {
    //     if(i==1e5-1)
    //         cout<<rand()%(int)(1e9)<<" ";
    //     else
    //         cout<<rand()%(int)(1e9)<<",";
    // }

    // cout<<"]";
    
    // for(int i=0; i<5; ++i)
    // {
    //     int
    // }

    cout<<10000<<endl;
    for(int i=0; i<1e4; ++i)
    {
        cout<<rand()%((int)1e9)+1<<" "<<rand()%(int)1e12+1<<endl;;
    }
    
    

    double used= (double) (clock()-start);
    used=(used*1000)/CLOCKS_PER_SEC;
    cerr<<fixed<<setprecision(2)<<used<<" ms"<<endl;



    return 0;
}

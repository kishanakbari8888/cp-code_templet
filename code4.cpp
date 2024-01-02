#include<bits/stdc++.h>
#include <stdio.h>
// #include "string.h"
using namespace std;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// #define int long long 
// using namespace __gnu_pbds;


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    cout<<setprecision(10)<<fixed;


    int n,m; cin>>n>>m;
    vector<vector<int>> v(n+1);

    for (int i = 0; i < m; ++i)
    {
        int a,b; cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int w; cin>>w;
    vector<vector<int>> h(n+1,vector<int>(w));

    for (int i = 0; i < n; ++i)
    {
        for(int j=0; j<w; ++j)
        {
            cin>>h[i+1][j];
        }
    }

    // int dp[n+1][w+10];
    // memset(dp,-1,sizeof(dp));
    vector<vector<int>> dp(n+10,vector<int>(w+10,-1));


    int aa = 0;
    function<int(int,int)> rec = [&](int node,int week)
    {

        if(week>=w)
            return (int)0;

        if(dp[node][week]!=-1)
            return dp[node][week];
        int ans = h[node][week] + rec(node,week+1);

        for(int neb:v[node])
        {
            ans = max(ans,h[neb][week] + rec(neb,week+1));
        }

        return dp[node][week] = ans;
        // return ans;
    };
    

    int ans = 0;
    for(int i=1; i<=n; ++i)
    {
        ans = max(ans,rec(i,0));
    }

    cout<<ans<<endl;




    

    return 0;
}       



#include<bits/stdc++.h>
#include <stdio.h>
#include "string.h"
using namespace std;
// #define int long long 
// #define ll long long 
#define endl '\n' 
#define pb push_back
#define all(x) x.begin(),x.end() 
#define con(s1,s2) strstr(s1.c_str(),s2.c_str())
#define foreach(x,y) for(auto &x:y)
#define allr(x) x.rbegin(),x.rend()
#define sum(a) accumulate(a.begin(), a.end(), (int)0)
#define ff first
#define ss second
#define pi pair<int,int>
int M = 998244353;


int helper(vector<vector<int>> &v) {
        
    int n = v.size();
    int sum = 0;
    for(auto x:v)
    {
        sum+=x[1];
    }

    vector<vector<int>> dp(n+10,vector<int>(2*n+100,-1));
    function<int(int,int)> rec = [&](int ix,int ext)
    {
        if(n-ix<=ext)
            return 0;
        if(ix==n)
        {
            if(ext>=0)
                return 0;
            else
                return (int)1e9;
        }
        
        if(dp[ix][n+ext]!=-1)
            return dp[ix][n+ext];
        
        
        int ans = 1e9;
        ans = min(ans,rec(ix+1,ext-1));
        ans = min(ans,rec(ix+1,ext+v[ix][0]) + v[ix][1]);
        
        return dp[ix][n+ext] = ans;
    };


    return sum-rec(0,0);
        
}


string largestBucket(const vector<string>& commands) {
    unordered_map<string, unordered_set<string>> bucketFiles;
    string currentBucket;

    for (const string& command : commands) {
        string cmdType = command.substr(0, 4);

        if (cmdType == "goto") {
            string arg = command.substr(5);
            currentBucket = arg;
        } else if (cmdType == "crea") {
            string arg = command.substr(7);
            bucketFiles[currentBucket].insert(arg);
        }
    }

    string largestBucket;
    int maxFiles = 0;

    for (const auto& pair : bucketFiles) {
        int fileCount = pair.second.size();
        if (fileCount > maxFiles) {
            maxFiles = fileCount;
            largestBucket = pair.first;
        }
    }

    return largestBucket;
}



int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    cout<<setprecision(10)<<fixed;

    
    int n; cin>>n;
    vector<vector<int>> v(n,vector<int>(2));
    for(int i=0; i<n; ++i)
    {
        cin>>v[i][0]>>v[i][1];
    }

    cout<<helper(v);        


    return 0;
}       



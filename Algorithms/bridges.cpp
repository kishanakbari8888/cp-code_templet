#include<bits/stdc++.h>
#include "string.h"
using namespace std;
#define int long long int


vector <vector <int> > g;
vector<pair<int,int>> bridge;
vector <int> ap, tin, low;
vector <int> apvs,vs;
int n,m, ptr;

void dfs(int u, int p) 
{
	vs[u] = 1;
	tin[u] = ptr;
	low[u] = ptr;
	ptr++;
	for (int v : g[u]) 
	{
		if (v == p)
			continue;
		else if (vs[v])
			low[u] = min(low[u], tin[v]);
		else 
		{
			dfs(v, u);
			low[u] = min(low[u], low[v]);
			if (low[v] > tin[u])
				bridge.push_back({min(u, v), max(u, v)});
		}
	}
}
void bridges() 
{
	ptr = 0;
	vs=vector<int>(n+1,0);
	tin=vector<int>(n+1,0);
	low=vector<int>(n+1,0);
	apvs=vector<int>(n+1,0);
	ap.clear();
	for (int i = 1; i <= n; i++)
	{
		if (!vs[i])
			dfs(i, 0);
	}
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout<<setprecision(20)<<fixed;

	int x,y;
	cin>>n>>m;
	g=vector<vector<int>>(n+1);
	for(int i=0;i<m;i++)
	{
		cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	bridges();
	print(bridge);
	return 0;
}
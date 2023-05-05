#include<bits/stdc++.h>
#include "string.h"
using namespace std;
#define int long long

const int N=2e5+4,L=21;
vector<int> g[N];
int perent[N][L],dpth[N];
int n,m;

void dfs(int x,int p)
{
	dpth[x]=dpth[p]+1;
	perent[x][0]=p;
	for(int u:g[x])
		if(u!=p)
			dfs(u,x);
}

void lca_fun()
{
	for(int i=1;i<L;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(perent[j][i-1]!=-1)
				perent[j][i]=perent[perent[j][i-1]][i-1];
		}
	}
}

int lca(int x,int y)
{
	if(dpth[x]>dpth[y])
		swap(x,y);
	int d=dpth[y]-dpth[x];
	for(int i=0;i<L;i++)
		if((d>>i)&1)
			y=perent[y][i];
	if(x==y)
		return x;
	for(int i=L-1;i>=0;i--)
	{
		if(perent[x][i]!=perent[y][i])
		{
			x=perent[x][i];
			y=perent[y][i];
		}
	}
	return perent[x][0];
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout<<setprecision(20)<<fixed;

	int x,y;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	dfs(1,0);
	lca_fun();
	cout<<lca(4,7)<<" "<<lca(4,6)<<endl;
	return 0;
}
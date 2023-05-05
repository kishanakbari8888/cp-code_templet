#include<bits/stdc++.h>
#include "string.h"
using namespace std;
#define int long long

const int N=4e5+4;
vector<int> g[N];
int st[4*N],lazy[4*N];
int c[N],tin[N],tout[N],a[N];
int tc=0;

void dfs(int x,int p)
{
	tc++;
	tin[x]=tc;
	a[tc]=c[x];
	for(int y:g[x])
	{
		if(y!=p)
			dfs(y,x);
	}
	tout[x]=tc;
}

void fun(int n,int l,int r)
{
	if(l!=r)
	{
		lazy[2*n]=lazy[n];
		lazy[2*n+1]=lazy[n];
	}
	st[n]=lazy[n];
	lazy[n]=0;
}

void build(int n ,int l,int r)
{
	if(l==r)
	{
		st[n]=a[l];
		return;
	}
	int m=(l+r)/2;
	build(2*n,l,m);
	build(2*n+1,m+1,r);
	st[n]=st[2*n]|st[2*n+1];
}

void update(int n,int l,int r,int x,int y,int v)
{
	if(lazy[n]!=0)
		fun(n,l,r);
	if(x>r || y<l)
		return;
	if(x<=l && r<=y)
	{
		st[n]=v;
		if(l!=r)
		{
			lazy[2*n]=v;
			lazy[2*n+1]=v;
		}
		return;
	}
	int m=(l+r)/2;
	update(2*n,l,m,x,y,v);
	update(2*n+1,m+1,r,x,y,v);
	st[n]=st[2*n]|st[2*n+1];
}

int query(int n,int l,int r,int x,int y)
{
	if(lazy[n]!=0)
		fun(n,l,r);
	if(x>r || y<l)
		return 0;
	if(x<=l && r<=y)
		return st[n];
	int m=(l+r)/2;
	int q1=query(2*n,l,m,x,y);
	int q2=query(2*n+1,m+1,r,x,y);
	return q1|q2;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout<<setprecision(20)<<fixed;

	int n,m;
	cin>>n>>m;
	int x,y;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		c[i]=1ll<<x;
	}
	for(int i=0;i<n-1;i++)
	{
		cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	dfs(1,0);
	build(1,1,n);
	for(int i=0;i<m;i++)
	{
		cin>>x;
		if(x==1)
		{
			int c1;
			cin>>y>>c1;
			update(1,1,n,tin[y],tout[y],1ll<<c1);
		}
		else
		{
			cin>>y;
			int q=query(1,1,n,tin[y],tout[y]);
			int c1=0;
			while(q>0)
			{
				c1+=q&1;
				q=q>>1;
			}
			cout<<c1<<endl;
		}
	}
	return 0;
}
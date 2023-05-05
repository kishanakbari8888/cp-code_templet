#include<bits/stdc++.h>
#include "string.h"
using namespace std;
#define int long long

const int N=4e5+4;
int st[4*N];

void build(vector<int> &v,int n,int l,int r)
{
	if(l==r)
	{
		st[n]=v[l];
		return;
	}
	int m=(l+r)/2;
	build(v,2*n+1,l,m);
	build(v,2*n+2,m+1,r);
	st[n]=st[2*n+1]+st[2*n+2];
}

void update(int n,int l,int r,int x,int v)
{
	if(l==r)
	{
		st[n]=v;
		return;
	}
	int m=(l+r)/2;
	if(l<=x && x<=m)
		update(2*n+1,l,m,x,v);
	else
		update(2*n+2,m+1,r,x,v);
	st[n]=st[2*n+1]+st[2*n+2];
}

int query(int n,int l,int r,int x,int y)
{
	if(x>r || y<l)
		return 0;
	if(x<=l && r<=y)
		return st[n];
	int m=(l+r)/2;
	int q1=query(2*n+1,l,m,x,y);
	int q2=query(2*n+2,m+1,r,x,y);
	return q1+q2;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout<<setprecision(20)<<fixed;


	return 0;
}
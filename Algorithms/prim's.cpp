#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int N=2e5+4;
int n,m;
vector<pair<int,int>> g[N];
int prim(int x)
{
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
	bool vs[N];
	for(int i=0;i<=n;i++)
		vs[i]=false;
	int a1;
	pair<int,int> p;
	int minc=0;
	q.push(make_pair(0,x));
	while(!q.empty())
	{
		p=q.top();
		q.pop();
		int y=p.second;
		if(vs[y])
			continue;
		minc+=p.first;
		vs[y]=true;
		for(int i=0;i<g[y].size();i++)
		{
			a1=g[y][i].second;
			if(!vs[a1])
				q.push(g[y][i]);
		}
	}
	return minc;
}
int32_t main()
{
	// #ifndef ONLINE_JUDGE
	// 	freopen("input.txt","r",stdin);
	// 	freopen("output.txt","w",stdout);
	// #endif
	
	int a,b,w;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		cin>>a>>b>>w;
		g[a].push_back(make_pair(w,b));
		g[b].push_back(make_pair(w,a));
	}
	int c=prim(1);
	cout<<c<<endl;
}
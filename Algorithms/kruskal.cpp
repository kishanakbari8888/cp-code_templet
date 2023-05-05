#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int MAX=1e5+4;
int ds[MAX];
int n,m;
vector<pair<int,pair<int,int>>> v;

int root(int n1)
{
	while(ds[n1]!=n1)
	{
		ds[n1]=ds[ds[n1]];
		n1=ds[n1];
	}
	return n1;
}
void union1(int x,int y)
{
	int p=root(x);
	int q=root(y);
	ds[p]=ds[q];
}
int kruskal()
{
	int x,y,minc=0;

	for(int i=0;i<MAX;i++)
		ds[i]=i;
	sort(v.begin(),v.end());

	for(int i=0;i<m;i++)
	{
		x=v[i].second.first;
		y=v[i].second.second;
		if(root(x)!=root(y))
		{
			minc+=v[i].first;
			union1(x,y);
		}
	}
	return minc;
}
main()
{
	
	int a,b,w;
	cin>>n>>m;
	
	for(int i=0;i<m;i++)
	{
		cin>>a>>b>>w;
		v.push_back({w,{a,b}});
	}
	int c=kruskal();
	cout<<c<<endl;
}
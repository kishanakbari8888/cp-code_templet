#include<bits/stdc++.h>
#include "string.h"
using namespace std;
#define int long long

int dp[2002][2002][2];
vector<int> v;
int m,d,n;
int M=1e9+7;
int fun(int x,int s,int f)
{
	if(x>=n)
		return s==0;
	int& t=dp[x][s][f];
	if(t!=-1 && f!=1)
		return t;
	int f1=f?v[x]:9;
	t=0;
	for(int i=0;i<=f1;i++)
	{
		if(x%2==0 && i==d)
			continue;
		if(x%2==1 && i!=d)
			continue;
		int t1=v[x]==i?f:0;
		int t2=(s*10+i)%m;
		t=(t+fun(x+1,t2,t1))%M;
	}
	t=t%M;
	return t;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout<<setprecision(20)<<fixed;

	cin>>m>>d;
	string a,b;
	cin>>a>>b;
	memset(dp,-1,sizeof(dp));
	for(int i=0;i<a.size();i++)
		v.push_back(a[i]-'0');
	n=v.size();
	for(int i=n-1;i>=0;i--)
	{
		if(v[i]!=0)
		{
			v[i]--;
			break;
		}
		v[i]=9;
	}
	//print(v);
	int d1=fun(0,0,1);
	v.clear();
	for(int i=0;i<b.size();i++)
		v.push_back(b[i]-'0');
	n=v.size();
	int d2=fun(0,0,1);
	cout<<(d2-d1+M)%M<<endl;
	return 0;
}
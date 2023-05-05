#include<bits/stdc++.h>
using namespace std;
#define int long long int
int M=1000000007;

int modInverse(int a,int n)
{
	int r1=n,r2=a;
	int t1=0,t2=1;
	int q,t,r;
	//int k3;
	while(r2>0)
	{
		q=r1/r2;
		r=r1%r2;
		t=t1-q*t2;
		r1=r2,r2=r;
		t1=t2,t2=t;
	}
	return (t1+n)%n;
	// if(r1==1)
	// 	k3=t1;
	// if(k3<0)
	// 	k3+=n;
	// return k3;	
}

int fmpower(int a,int n)
{
	int p=1;
	while(n>0)
	{
		if(n&1)
			p=((p%M)*(a%M))%M;
		a=((a%M)*(a%M))%M;
		n=n>>1;
	}
	return p;
}

int fpower(int a,int n)
{
	int p=1;
	while(n>0)
	{
		if(n&1)
			p*=a;
		a*=a;
		n=n>>1;
	}
}

int Ufun(vector<int>& v,int t)
{
	int a=-1;
	if(v.size()==0)
		return a;
	int l=0,r=v.size()-1;
	while(l<=r)
	{
		int m=(l+r)/2;
		if(v[m]>t)
		{
			a=m;
			r=m-1;
		}
		else
			l=m+1;
	}
	return a;
}

int Lfun(vector<int>& v,int t)
{
	int a=-1;
	if(v.size()==0)
		return a;
	int l=0,r=v.size()-1;
	while(l<=r)
	{
		int m=(l+r)/2;
		if(v[m]<t)
		{
			a=m;
			l=m+1;
		}
		else
			r=m-1;
	}
	return a;
}


int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout<<setprecision(10)<<fixed;
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	return 0;
}


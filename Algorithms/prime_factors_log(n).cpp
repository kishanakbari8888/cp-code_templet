#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int N=1e6+6;
int pf[N];
void fun()
{
	pf[1]=1,pf[0]=1;
	for(int i=0;i<N;i++)
		pf[i]=i;
	for(int i=2;i*i<N;i++)
	{
		if(pf[i]==i)
		{
			for(int j=i;j<N;j+=i)
			{
				if(pf[j]==j)
					pf[j]=i;
			}
		}
	}
}
vector<int> fun1(int x)
{
	vector<int> v;
	while(x!=1)
	{
		v.push_back(pf[x]);
		x/=pf[x];
	}
	return v;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout<<setprecision(10)<<fixed;
	
	int n;
	cin>>n;
	fun();
	vector<int> v=fun1(24);
	for(int x:v)
		cout<<x<<" ";
	cout<<endl;
	
	return 0;
}
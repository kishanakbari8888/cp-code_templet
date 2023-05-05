#include<bits/stdc++.h>
#include "string.h"
using namespace std;
#define int long long

const int M = 1e9 + 7;
 
int add(int a,int b) {
	int t=(a+b)%M;
	return t;
}
 
int mul(int a,int b) {
	int t=(a*b)%M;
	return t;
}
 
class matrix
{
public:
	vector<vector<int>> mat;
	int n,m;
	matrix(int a)
	{
		n=a,m=a;
		mat=vector<vector<int>>(n);
		for(int i=0;i<n;i++)
			mat[i]=vector<int>(n);
	}

	matrix(int a,int b)
	{
		n=a,m=b;
		mat=vector<vector<int>>(n);
		for(int i=0;i<n;i++)
			mat[i]=vector<int>(m);
	}
 
	void reset() 
	{
		for(int i=0;i<n;i++) 
		{
			for(int j=0;j<m;j++) 
			{
				mat[i][j]=0;
			}
		}
	}
 
	void one() 
	{
		reset();
		for(int i=0;i<n;i++)
			mat[i][i]=1;
	}
 
	matrix operator + (const matrix &a) const 
	{
		matrix res(n);
		for(int i=0;i<n;i++) 
		{
			for(int j=0;j<m;j++)
				res.mat[i][j]=add(mat[i][j],a.mat[i][j]);
		}
		return res;
	}
 
	matrix operator * (const matrix &a) const
	{
		matrix res(n);
		for(int i=0;i<n;i++) 
		{
			for(int j=0;j<a.m;j++) 
			{
				res.mat[i][j]=0;
				for(int k=0;k<m;k++)
					res.mat[i][j]=add(res.mat[i][j],mul(mat[i][k],a.mat[k][j]));
			}
		}
		return res;
	}
	void print()
	{
		for(int i=0;i<mat.size();i++)
		{
			for(int j=0;j<mat[0].size();j++)
				cout<<mat[i][j]<<" ";
			cout<<endl;
		}
	}
};
 
matrix power(matrix a,int n) {
	matrix p(a.n);
	p.one();
	while(n>0)
	{
		if(n&1)
		{
			p=p*a;
		}
		a=a*a;
		n=n>>1;
	}
	return p;
}


int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout<<setprecision(20)<<fixed;

	

	return 0;
}

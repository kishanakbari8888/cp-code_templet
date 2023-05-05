#include<bits/stdc++.h>
using namespace std;
// #define int long long


template<typename T>
void print(T a)
{
	cout<<a<<" ";
}

template<typename T1,typename T2>
void print(pair<T1,T2> p)
{
	cout<<'{'<<p.first<<" "<<p.second<<"} ";
}

template<typename T1,typename T2,typename T3>
void print(pair<T1,pair<T2,T3>> p)
{
	cout<<"{"<<p.first<<" {"<<p.second.first<<" "<<p.second.second<<"}}"<<" ";
}
template<typename T1,typename T2,typename T3>
void print(pair<pair<T1,T2>,T3> p)
{
	cout<<"{{"<<p.first.first<<","<<p.first.second<<"},"<<p.second<<"}"<<" ";
}

template<typename T>
void print(vector<T>& a)
{
	int n=a.size();
	cout<<"[ ";
	for(int i=0;i<n;i++)
		print(a[i]);

	cout<<"]"<<endl;
}

template<typename T>
void print(vector<T>& a,int n)
{
	cout<<"[ ";
	for(int i=0;i<n;i++){
		print(a[i]);
	}
	cout<<"]"<<endl;
}

template<typename T>
void print(T a[],int n)
{
	for(int i=0;i<n;i++){
		print(a[i]);
	}
}

template<typename T>
void print(vector<vector<T>>& v)
{
	for(int i=0;i<v.size();i++)
	{
		print(v[i]);
	}
	cout<<endl;
}

template<typename T1,typename T2>
void print(map<T1,T2> m)
{
	cout<<"{ ";
	for(auto x:m)
	{
		print(x.first);cout<<':';print(x.second);cout<<", ";
	}
	cout<<" }"<<endl;
}
template<typename T1,typename T2>
void print(unordered_map<T1,T2> m)
{
	cout<<"{ ";
	for(auto x:m)
	{
		cout<<x.first<<':'<<x.second<<", ";
	}
	cout<<" }"<<endl;
}

template<typename T>
void print(set<T> s)
{
	cout<<"[ ";
	for(auto i=s.begin();i!=s.end();i++)
		print(*i);
	cout<<']'<<endl;
}
template<typename T>
void print(unordered_set<T> s)
{
	cout<<"[ ";
	for(auto i=s.begin();i!=s.end();i++)
		cout<<*i<<" ";
	cout<<']'<<endl;
}

template<typename T>
void print(multiset<T> s)
{
	cout<<"[ ";
	for(auto i=s.begin();i!=s.end();i++)
		cout<<*i<<" ";
	cout<<']'<<endl;
}


void print(pair<int,pair<int,int>> p)
{
	cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
}

void print(pair<int,int> p)
{
	cout<<p.first<<" "<<p.second<<endl;
}
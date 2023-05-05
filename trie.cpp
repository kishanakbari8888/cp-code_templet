#include<bits/stdc++.h>
#include "string.h"
using namespace std;
#define int long long

class trie
{
public:
	 int c;
	 trie* child[27];
	 trie()
	 {
	 	c=0;
	 	for(int i=0;i<26;i++)
	 		child[i]=NULL;
	 }

	 void insert(string& s,int x)
	 {
	 	c++;
	 	if(x<s.size())
	 	{
	 		int t=s[x]-'a';
	 		if(child[t]==NULL)
	 			child[t]=new trie();
	 		if(child[26]==NULL)
	 			child[26]=new trie();
	 		child[t]->insert(s,x+1);
	 		child[26]->insert(s,x+1);
	 	}
	 }

	 int get(string& s,int x)
	 {
	 	if(x==s.size())
	 		return c;
	 	int t=0;
	 	if(s[x]=='.')
	 		t=26;
	 	else
	 		t=s[x]-'a';
	 	if(child[t]==NULL)
	 		return 0;
	 	return child[t]->get(s,x+1);
	 }
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout<<setprecision(20)<<fixed;

	int n,x;
	cin>>n>>x;
	string s;
	trie* a=new trie();
	for(int i=0;i<n;i++)
	{
		cin>>s;
		a->insert(s,0);
	}
	int m;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>s;
		cout<<a->get(s,0)<<endl;
	}
	return 0;
}

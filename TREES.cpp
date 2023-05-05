#include<bits/stdc++.h>
#include <stdio.h>
#include "string.h"
using namespace std;
#define int long long 
#define pb(x) push_back(x)

class node{

public:
	int data;
	node *left,*right;
	node(int d)
	{
		data=d;
		left=right=NULL;
	}
};


class abc{
public:
    int a;
    abc(int aa)
    {
        a=aa;
    }
};



int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<setprecision(2)<<fixed;

    // node *a=new node(7);
    // a->left=new node(6);
    // a->right=new node(8);
    // a->left->left=new node(4);
    // a->left->left->left=new node(10);
    // a->left->left->right=new node(12);
    // a->left->right=new node(5);
    // a->right->left=new node(6);
    // a->right->right=new node(9);

    node a = node(2);
    a.left = new node(5);
    a.left->left = new node(10);



      //        7
      //       / \
      //      /   \
      //     6     8
      //    / \   / \
      //   4   5 6   9
      //  / \
      // 10  12

    // node *a=new node(7);
    // a->left=new node(8);
    // a->right=new node(6);
    // a->left->left=new node(9);
    // a->left->right=new node(6);
    // a->right->left=new node(5);
    // a->right->right=new node(4);
    // a->right->right->left=new node(12);
    // a->right->right->right=new node(10);

    // printpreorder(a);
    // cout<<endl;
    // printInorededwithstack(a);




   return 0;
}
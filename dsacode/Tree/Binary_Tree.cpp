#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *r,*l;
    node(int d)
    {
        data = d;
        r = NULL;
        l = NULL;
    }
};

void inorder(node *root) {
  if (root == NULL)
    return ;

    inorder(root->l);

    cout << root->data << "  ";

    inorder(root->r);
}

int minvalue(node *tree)
{
    if(tree->l==NULL)
        return tree->data;
    return minvalue(tree->l);

}

node* deletenode(node* tree, int val)
{
    if(tree==NULL)
        return tree;
    if(val<tree->data)
        tree->l = deletenode(tree->l,val);
    else if(val>tree->data)
        tree->r = deletenode(tree->r,val);
    else
    {
        if(tree->l==NULL)
            return tree->r;
        else if(tree->r==NULL)
            return tree->l;
        else
        {
            int mi = minvalue(tree->r);
            tree->data = mi;
            tree->r = deletenode(tree->r,mi);
        }
    }

    return tree;
}


void in(node* tree,int val)
{
    if(tree->l!=NULL && val<=tree->data)
    {
        in(tree->l,val);
    }
    else if(tree->l==NULL && val<=tree->data)
    {
        tree->l = new node(val);
        return ;
    }
    else if(tree->r!=NULL)
        in(tree->r,val);
    else
    {
        tree->r = new node(val);
        return ;
    }
}

int32_t main()
{
    node *tree = new node(20);
    in(tree,30);
    in(tree,40);
    in(tree,50);
    in(tree,10);

    deletenode(tree,30);

    inorder(tree);

    
    return 0;
}


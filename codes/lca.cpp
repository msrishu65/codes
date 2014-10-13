#include<iostream>
using namespace std;
struct node
{
    int info;
    node *left;
    node *right;
};
node *newNode(int data)
{
 node *n=new node;
 n->info=data;
 n->left=NULL;
 n->right=NULL;
 return n;
}
node *lca(node *root,int a,int b)
{
    if(root==NULL)
        return NULL;
   if(root->info==a || root->info==b)
    return root;
   node *l=lca(root->left,a,b);
   node *r=lca(root->right,a,b);
   if(l && r)
    return root;
   if(l)
    return l;
   else
    return r;
}
int main()
{
    node *root = newNode(10);
    root->left = newNode(30);
    root->right = newNode(15);
    root->left->left = newNode(20);
    root->right->right = newNode(5);
    node *n=lca(root,15,20);
    cout<<n->info;
}

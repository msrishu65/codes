#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int info;
    node *left;
    node *right;
}*root;
node *push(int x)
{
    node *temp=new node;
    temp->info=x;
    temp->left=temp->right=NULL;
        return temp;
}
int lca(node *root,int n1,int n2)
{
  if(root==NULL)
        return 0;
 if(root->info==n1 || root->info==n2)
            return root->info;
  int l=lca(root->left,n1,n2);
  int r=lca(root->right,n1,n2);
  if(l && r)
    return root->info;
  if(l)
  return l;
  else
    return r;
}
int getdistance(node *root,int data,int level)
{
    if(root==NULL)
        return -1;
     if(root->info==data)
            return level;
  int l=getdistance(root->left,data,level+1);
    if(l!=-1)
        return l;
    else
        return
        getdistance(root->right,data,level+1);
}
int distance(node *root,int x,int y)
{
    int ancestor=lca(root,x,y);
    int d1=getdistance(root,x,1);
    int d2=getdistance(root,y,1);
    int d3=getdistance(root,ancestor,1);
  //  cout<<d1<<" "<<d2<<" "<<d3;
    return d1+d2-(2*d3);
}
int main()
{
  root = push(10);
  root->left = push(-2);
  root->right = push(6);
  root->left->left = push(8);
  root->left->right = push(-4);
  root->right->left = push(7);
  root->right->right = push(5);
  cout<<distance(root,-2,5);
}

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
void preorder(node *root)
{
    if(root==NULL)
        return;
    cout<<root->info<<" ";
    preorder(root->left);
    preorder(root->right);
}
int level(node *root,node *n,int levl)
{
    if(n==NULL || root==NULL)
        return -1;
    if(root==n)
        return levl;
    int l=level(root->left,n,levl+1);
    if(l)
        return l;
    else
        return level(root->right,n,levl+1);
}
int issibling(node *root,node *n1,node *n2)
{
    if(root==NULL || n1==NULL || n2==NULL)
        return 0;
    if((root->left==n1 && root->right==n2)||issibling(root->left,n1,n2) || issibling(root->right,n1,n2))
        return 1;
}
int iscousion(node *root,node *n1,node *n2)
{
    if(root=NULL)
        return 0;
    int l1=level(root,n1,1);
    int l2=level(root,n2,1);
    if(l1==l2 && !issibling(root,n1,n2))
        return 1;
    else
        return 0;
}
int main()
{
  root = push(10);
  root->left = push(6);
  root->right = push(14);
  root->left->left = push(4);
  root->left->right = push(8);
  root->right->left = push(12);
  root->right->right = push(16);
  if(iscousion(root,root->left->left,root->right->left))
    cout<<"yo";
  else
    cout<<"no";
}

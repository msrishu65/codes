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
node *prunetree(node *root,int x,int y)
{
    if(root==NULL)
        return NULL;
    if(root->info<x)
    {
        node *temp=root;
        root=root->right;
        temp->left=temp->right=NULL;
        delete(temp);
        prunetree(root,x,y);
    }
    else if(root->info>y)
    {
        node *temp=root;
        root=root->left;
       // temp->left=temp->right=NULL;
        delete(temp);
        prunetree(root,x,y);
    }
    else
    {
        prunetree(root->left,x,y);
        prunetree(root->right,x,y);
    }
    return root;
}
void preorder(node *root)
{
    if(root==NULL)
        return;
    cout<<root->info<<" ";
    preorder(root->left);
    preorder(root->right);
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
  int x,y;
  cin>>x>>y;
  root=prunetree(root,x,y);
  cout<<root->info;
  preorder(root);
}

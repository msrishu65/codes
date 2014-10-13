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
int addchildrensum(node *root)
{
if(root==NULL)
    return 0;
    int old=0;
int ls=addchildrensum(root->left);
int rs=addchildrensum(root->right);
        old=root->info+ls+rs;
        root->info=ls+rs;
        return old;
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
  root->left = push(-2);
  root->right = push(6);
  root->left->left = push(8);
  root->left->right = push(-4);
  root->right->left = push(7);
  root->right->right = push(5);
    addchildrensum(root);
    preorder(root);
}

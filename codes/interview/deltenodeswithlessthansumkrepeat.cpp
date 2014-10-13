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
node *deletenodes(node *root,int m,int *sum)
{
  if(root==NULL)
        return NULL;
        int ls,rs;
        ls=*sum+root->info;
        rs=ls;
  root->left=deletenodes(root->left,m,&ls);
  root->right=deletenodes(root->right,m,&rs);
  *sum=max(ls,rs);
  if(*sum<m)
  {
    delete(root);
    root=NULL;
  }
    return root;
}
void preorder(node *root)
{
    if(root==NULL)
        return ;
    cout<<root->info<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{
  root=push(1);
  root->left=push(2);
  root->right=push(3);
  root->left->left=push(4);
  root->left->right=push(5);
  root->right->left=push(6);
  root->right->right=push(7);
  int sum=0;
  root=deletenodes(root,9,&sum);
  preorder(root);
}

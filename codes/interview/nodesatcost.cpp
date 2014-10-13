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
void findnodes(node *root,int level,int k)
{
    if(root==NULL)
        return ;
    if(level==k)
        cout<<root->info<<" ";
    findnodes(root->left,level+1,k);
    findnodes(root->right,level+2,k);
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
  findnodes(root,0,3);
}

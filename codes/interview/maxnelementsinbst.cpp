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
void maxnelements(node *root,int n)
{
            static int c=0;
    if(root==NULL || c==n)
        return;
      maxnelements(root->right,n);
          cout<<root->info;
          c++;
          if(c==n)
            return;
         maxnelements(root->left,n);
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
  int m=3;
//  for(int i=1;i<=m;i++)
  //{
    //  int indx=0;
    maxnelements(root,m);
  //}
}


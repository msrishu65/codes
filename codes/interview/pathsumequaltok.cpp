#include<iostream>
#include<stdlib.h>
using namespace std;

int a[99]={0};
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
void pathsum(node *root,int k,int i)
{
    if(root==NULL)
    {

        return;
    }
         a[i]=root->info;
         i++;
         if(root->left==NULL && root->right==NULL)
         {
              int sum=0;
        for(int j=0;j<i;j++)
        {
            sum=sum+a[j];
        }
        if(sum==k)
        {
            for(int j=0;j<i;j++)
                cout<<a[j]<<" ";
        }
         }
         pathsum(root->left,k,i);
         pathsum(root->right,k,i);
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
  pathsum(root,20,0);
}

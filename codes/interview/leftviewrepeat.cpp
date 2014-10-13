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
void leftview(node *root,int level,int *max)
{
    if(root==NULL)
        return;
    if(level==*max)
        {
            cout<<root->info<<" ";
            *max=*max+1;
        }
        leftview(root->left,level+1,max);
        leftview(root->right,level+1,max);
}
void levelorder(node *root,int level,int f)
{
    if(root==NULL)
        return;
    if(level==0)
        cout<<root->info<<" ";
        if(f==1)
        {
    levelorder(root->left,level-1,f);
    levelorder(root->right,level-1,f);
        }
        else
        {
            levelorder(root->right,level-1,f);
            levelorder(root->left,level-1,f);
        }
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
  int max=0;
 // leftview(root,0,&max);
 int f=-1;
 for(int i=0;i<3;i++)
 {
     levelorder(root,i,f);
     cout<<endl;
     f=-f;
 }
}

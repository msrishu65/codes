#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int info;
    node *left;
    node *right;
    node *next;
}*root;
node *push(int x)
{
    node *temp=new node;
    temp->info=x;
    temp->left=temp->right=temp->next=NULL;
        return temp;
}
void deepestleftleafnode(node *root,int isleft,int *max,int height,node **t)
{
    if(root==NULL)
        return ;
    if(isleft && !root->left && !root->right && *max<height)
    {
        *max=height;
        *t=root;
        return;
    }
    deepestleftleafnode(root->left,1,max,height+1,t);
    deepestleftleafnode(root->right,0,max,height+1,t);
}
int main()
{
    root=push(50);
    root->left=push(30);
    root->right=push(70);
    root->left->left=push(20);
    root->left->right=push(40);
    root->right->left=push(60);
    root->right->right=push(80);
    int max=0;
   node *t;
   deepestleftleafnode(root,0,&max,0,&t);
   cout<<t->info;
}

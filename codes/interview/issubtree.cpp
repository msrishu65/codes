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
int issubtree(node *root,node *subroot)
{
    if(root==NULL && subroot)
        return 0;
    if(root==NULL)
        return 1;
    if(subroot==NULL)
        return 1;
    if(root->info==subroot->info && issubtree(root->left,subroot->left) && issubtree(root->right,subroot->right))
        return 1;
        else
        {
      return  (issubtree(root->left,subroot) || issubtree(root->right,subroot));
        }
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
    node *subroot=push(30);
    subroot->left=push(20);
    //subroot->right=push(40);
    cout<<issubtree(root,subroot);
}

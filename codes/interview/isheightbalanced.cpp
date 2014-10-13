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
int height(node *root)
{
    if(root==NULL)
        return 0;
    return height(root->left)+1+height(root->right);
}
int isheightbalanced(node *root,int *height)
{
    if(root==NULL)
        return 1;
    int lh=0,rh=0;
    int l,r;
    l=isheightbalanced(root->left,&lh);
    r=isheightbalanced(root->right,&rh);
    *height=max(lh,rh)+1;
    if(abs(lh-rh)<=1 && l && r )
        return 1;
    return 0;
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
    int ht=0;
    cout<<isheightbalanced(root,&ht);
}

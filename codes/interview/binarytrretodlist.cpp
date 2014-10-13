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
/*void fixleft(node *root)
{
    if(root==NULL)
        return;
      // static struct node *prev=NULL;
        fixleft(root->left);
        root->left=prev;
        prev=root;
        fixleft(root->right);
}
node *treetolist(node *root)
{
//    fixleft(root);
    while(root && root->right)
        root=root->right;
        node *temp;
        while(root && root->left)
        {
            temp=root;
           root=root->left;
           root->right=temp;
        }
        return root;
}*/
void treetodlist(node *root,node **h)
{
    if(root==NULL)
        return ;
    static node *prev=NULL;
    treetodlist(root->left,h);
    if(prev==NULL)
    {
        *h=root;
    }
    else
    {
        root->left=prev;
        prev->right=root;
    }
    prev=root;
    treetodlist(root->right,h);
}
int main()
{
    node *root = push(10);
    root->left        = push(12);
    root->right       = push(15);
    root->left->left  = push(25);
    root->left->right = push(30);
    root->right->left = push(36);
    //root=treetolist(root);
    node *h=NULL;
    treetodlist(root,&h);
    while(h)
    {
        cout<<h->info<<" ";
        h=h->right;
    }
}

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
node *predecessor(node *root,node *n)
{
    if(root==NULL)
        return NULL;
    if(n->left)
    {
        n=n->left;
        while(n->right)
        {
            n=n->right;
        }
        return n;
    }
    node *pre=new node;
    while(root)
    {
        if(root->info>n->info)
        {
            root=root->left;
        }
        if(root->info<n->info)
        {
            pre=root;
            root=root->right;
        }
        else
            break;
    }
    return pre;
}
int main()
{
 /* Let us create following BST
              50
           /     \
          30      70
         /  \    /  \
       20   40  60   80 */
    root=push(50);
    root->left=push(30);
    root->right=push(70);
    root->left->left=push(20);
    root->left->right=push(40);
    root->right->left=push(60);
    root->right->right=push(80);
    node *t=predecessor(root,root->right->right);
    cout<<t->info;
}

#include<iostream>
using namespace std;
struct node
{
node *left;
node *right;
int data;
int lis;
};
node* newNode( int data )
{
    node* temp = new node;
    temp->data = data;
    temp->left =NULL;
    temp->right=NULL;
    return temp;
}
int liss(node *root)
{
    if(root==NULL)
        return 0;
        if(root->lis)
            return root->lis;
        if(root->left==NULL && root->right)
            return (root->lis=1);
int ex=liss(root->left)+liss(root->right);
int inc=1;
if(root->left)
    inc=inc+liss(root->left->left)+liss(root->left->right);
if(root->right)
    inc=inc+liss(root->right->left)+liss(root->right->right);
        root->lis=max(inc,ex);
        return root->lis;
}
int main()
{
    // Let us construct the tree given in the above diagram
    struct node *root         = newNode(20);
    root->left                = newNode(8);
    root->left->left          = newNode(4);
    root->left->right         = newNode(12);
    root->left->right->left   = newNode(10);
    root->left->right->right  = newNode(14);
    root->right               = newNode(22);
    root->right->right        = newNode(25);


cout<<liss(root);
    return 0;
}

#include<iostream>
using namespace std;
struct node
{
    int info;
    node *left;
    node *right;
};
node *newNode(int data)
{
 node *n=new node;
 n->info=data;
 n->left=NULL;
 n->right=NULL;
 return n;
}
void inordertree(node *re)
{
    if(re==NULL)
        return;
    inordertree(re->left);
    cout<<re->info<<" ";
    inordertree(re->right);
}
void preorder(node *t)
{
    if(t==NULL)
        return;
    cout<<t->info<<" ";
    preorder(t->left);
    preorder(t->right);
}
void binarytoBST(node *t,int in[])
{
    static int i=0;
    if(t==NULL)
    return;
     binarytoBST(t->left,in);
     t->info=in[i];
     i++;
     binarytoBST(t->right,in);
}
int main()
{
    node *root = newNode(10);
    root->left = newNode(30);
    root->right = newNode(15);
    root->left->left = newNode(20);
    root->right->right = newNode(5);
    inordertree(root);
    cout<<endl;
    int in[]={5,10,15,20,30};
    binarytoBST(root,in);
     inordertree(root);
     cout<<endl;
     preorder(root);
}

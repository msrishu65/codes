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
void populatenextptr(node *root)
{
    if(root==NULL)
        return;
    if(root->next);
    populatenextptr(root->next);
    if(root->left)
    {
        if(root->right)
        root->left->next=root->right;
        else if(root->next)
        {
            if(root->next->left)
                root->left->next=root->next->left;
            else if(root->next->right)
                root->left->next=root->next->right;
        }
    }
         if(root->right)
    {
        if(root->next)
        {
            if(root->next->left)
            root->right->next=root->next->left;
            else if(root->next->right)
                root->right->next=root->next->right;
       }
    }
    populatenextptr(root->left);
    populatenextptr(root->right);
}
void preorder(node *root)
{
    if(root==NULL)
        return;
    cout<<root->info<<" ";
    if(root->next)
        cout<<root->next->info;
        cout<<endl;
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    root = push(10);
    root->left        = push(12);
    root->right       = push(15);
    root->left->left  = push(25);
//    root->left->right = push(30);
    root->right->left = push(36);
  populatenextptr(root);
  preorder(root);
}

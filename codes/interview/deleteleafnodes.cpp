#include<iostream>
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
void deletenodes(node *root)
{
    if(root==NULL)
        return;
     if(root->left->left==NULL && root->left->right==NULL)
        root->left=NULL;
     if(root->right->left==NULL && root->right->right==NULL)
        root->right=NULL;
     if(root->left)
        deletenodes(root->left);
     if(root->right)
        deletenodes(root->right);
}
void preorder(node *root)
{
    if(root==NULL)
        return ;
    cout<<root->info<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main()
{
root=push(1);
root->left=push(2);
root->right=push(3);
root->left->left=push(4);
root->left->right=push(5);
root->right->left=push(6);
root->right->right=push(7);
deletenodes(root);
cout<<"yo";
//cout<<root->left->left->info;
preorder(root);
}

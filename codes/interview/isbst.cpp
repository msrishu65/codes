#include<iostream>
#include<limits.h>
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
int isbst(node *root,int min,int max)
{
    if(root==NULL)
        return 1;
    if(root->info< min || root->info> max)
        return 0;
    return isbst(root->left,min,root->info-1) && isbst(root->right,root->info+1,max);
}
int main()
{
    root=push(4);
    root->left=push(3);
    root->right=push(6);
    root->left->left=push(1);
    root->left->right=push(5);
//    cout<<root->left->right->info;
    if(isbst(root,INT_MIN,INT_MAX))
        cout<<"yo";
    else
        cout<<"no bitch";
}

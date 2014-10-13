#include<iostream>
using namespace std;
struct node
{
    int info;
    node* left;
    node* right;
}*root1,*root,*root5;
node *newNode(int data)
{
    node *n =new node;
    n->info  = data;
    n->left  = NULL;
    n->right = NULL;

    return(n);
}
void preorder(node *t)
{
if(t==NULL)
return;
cout<<t->info<<" ";
preorder(t->left);
preorder(t->right);
}
void leftview(node *t,int l)
{
    if(t==NULL)
        return;
    if(l==1)
        {
            cout<<t->info<<" ";
            return;
        }
    leftview(t->left,l-1);
    leftview(t->right,l-1);
}
int main()
{
    struct node *root = newNode(12);
    root->left = newNode(10);
    root->right = newNode(30);
    root->right->left = newNode(25);
    root->right->right = newNode(40);
for(int i=1;i<4;i++)
    leftview(root,i);

}

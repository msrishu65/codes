#include<iostream>
using namespace std;
struct tree
{
int info;
tree *left;
tree *right;
tree *next;
};
tree *newNode(int data)
{
tree *node= new tree;
node->info=data;
node->left=NULL;
node->right=NULL;
node->next=NULL;
}
void preorder(tree *tr)
{
if(tr==NULL)
return;
cout<<tr->info<<" ";
preorder(tr->left);
preorder(tr->right);
}
void populatenodes(tree *t)
{
    static tree *node=NULL;
    if(t)
    {
        populatenodes(t->right);
        t->next=node;
        node=t;
        populatenodes(t->left);
    }
    return ;
}
int main()
{
     tree *root1 = newNode(1);
    root1->left = newNode(2);
    root1->right = newNode(3);
    root1->left->left  = newNode(4);
    root1->left->right = newNode(5);
    preorder(root1);
    populatenodes(root1);
    cout<<endl<<root1->next->info;
    cout<<endl<<root1->left->next->info;
}

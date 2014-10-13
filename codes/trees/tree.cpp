#include<iostream>
using namespace std;
struct node
{
int info;
node *left;
node *right;
}*root;
void createtree(node **t,int d)
{
if(*t==NULL)
{
   node *t=new node;
*t->info=d;
*t->left=NULL;
*t->right=NULL;
}
else
{
    if(d<*t->info) createtree(*t->left,d);
    else
        createtree(*t->right,d);
}
}
void preorder(node *t)
{
    if(t==NULL)
        return;
        cout<<t->info<<endl;
    preorder(t->left);
    preorder(t->right);
}
int main()
{
    int i=7;
    int m;
    while(i--)
    {
        cin>>m;
        createtree(&root,m);
    }
    preorder(root);
    return 0;
}

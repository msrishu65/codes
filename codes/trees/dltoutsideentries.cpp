#include<iostream>
using namespace std;
struct node
{
    int info;
    node* left;
    node* right;
};
node *newNode(int data)
{
    node *n =new node;
    n->info  = data;
    n->left  = NULL;
    n->right = NULL;

    return(n);
}
void inorderTraversal(node* root)
{
    if (root)
    {
        inorderTraversal( root->left );
        cout << root->info << " ";
        inorderTraversal( root->right );
    }
}
node *deleteoutsidentries(node *t,int min,int max)
{
    if(t==NULL)
        return NULL;
    t->left=deleteoutsidentries(t->left,min,max);
    t->right=deleteoutsidentries(t->right,min,max);
     if(t->info<min)
     {
       node *r=t->right;
       delete(t);
       return r;
      }
     if(t->info>max)
     {
         node *l=t->left;
         delete(t);
         return l;
     }
      return t;
}
int main()
{
    node *root=newNode(6);
    root->left=newNode(-13);
    root->right=newNode(14);
    root->left->right=newNode(-8);
    root->right->left=newNode(13);
    root->right->right=newNode(15);
    root->right->left->left=newNode(7);
    inorderTraversal(root);
    cout<<endl;
    deleteoutsidentries(root,-10,13);
    inorderTraversal(root);
}


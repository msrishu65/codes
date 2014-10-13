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
void inordersuccandpred(node *root,node **suc,node **pre,int k)
{
    if(root==NULL)
        return;
    if(root->info==k)
    {
        if(root->left)
        {
          node *t=root->left;
          while(t->right)
          {
              t=t->right;
          }
          *pre=t;
        }
        if(root->right)
        {
            node *t=root->right;
            while(t->left)
                t=t->left;

            *suc=t;
        }
        return;
    }
    if(root->info<k)
    {
        *suc=root;
        inordersuccandpred(root->left,suc,pre,k);
    }
    else
    {
        *pre=root;
        inordersuccandpred(root->right,suc,pre,k);
    }
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
    int n;
    cin>>n;
    node *pre=NULL,*suc=NULL;
  inordersuccandpred(root,&suc,&pre,n);
}

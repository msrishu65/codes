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
tree *getnext(tree *n)
{
     tree *temp=n->next;
     while(temp!=NULL)
     {
         if(temp->left)
            return temp->left;
         if(temp->right)
            return temp->right;
         temp=temp->next;
     }
     return NULL;
}

void connectlevel(tree* t)
{
 if(t==NULL)
        return;
 if(t->next)
            connectlevel(t->next);
 if(t->left)
 {
     if(t->right)
    {
        t->left->next=t->right;
        t->right->next=getnext(t);
        }
        else
        {
            t->left->next=getnext(t);
            }
            connectlevel(t->left);
 }
 else if(t->right)
 {
     t->right->next=getnext(t);
     connectlevel(t->right);
 }
 else
    connectlevel(getnext(t));
}

int main()
{
tree *root=new tree;
root=newNode(10);
root->left = newNode(8);
root->right = newNode(2);
root->left->left  = newNode(3);
root->right->right  = newNode(90);

preorder(root);
root->next==NULL;
connectlevel(root);
//cout<<root->left->left->next->info;
//cout<<endl<<root->left->next->info;
//cout<<endl<<root->right->next->info;
}

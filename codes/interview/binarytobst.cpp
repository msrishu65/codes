#include<iostream>
#include<stdlib.h>
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
void treetodlist(node *root,node **head)
{
if(root==NULL)
    return;
static node *prev=NULL;
treetodlist(root->left,head);
treetodlist(root->right,head);
if(prev==NULL)
{
    *head=root;
}
else
{
    root->left=prev;
    prev->right=root;
}
prev=root;
}
/*void splithalf(node *s,node **first,node **second)
{

     node *sp=NULL;
     node *fp=NULL;
    if(s==NULL ||s->next==NULL)
    {
        *first=s;
        *second=NULL;
    }
    else
    {
     sp=s;
     fp=s->next;
     while(fp)
     {
         fp=fp->next;
         if(fp)
         {
             sp=sp->next;
             fp=fp->next;
         }
     }
        *first=s;
        *second=sp->next;
        sp->next=NULL;
    }
}
node *merge(node *a,node *b)
{
    if(a==NULL)
        return b;
    if(b==NULL)
        return a;
    node *res=NULL;
        if(a->info<b->info)
        {
            res=a;
            res->next=merge(a->next,b);
        }
        else
        {
            res=b;
            res->next=merge(a,b->next);
        }
        return res;
}
node *mergesort(node **head)
{
    node *h=*head;
    if(h==NULL || h->next==NULL)
        return NULL;
        node *a;
        node *b;
        splithalf(h,&a,&b);
        mergesort(&a);
        mergesort(&b);
        *head=merge(a,b);
}*/
int main()
{
    node *root = push(10);
    root->left        = push(12);
    root->right       = push(15);
    root->left->left  = push(25);
    root->left->right = push(30);
    root->right->left = push(36);
    node *head=NULL;
    treetodlist(root,&head);
 //   head=mergesort(&head);
    while(head)
    {
        cout<<head->info<<" ";
        head=head->right;
    }
}

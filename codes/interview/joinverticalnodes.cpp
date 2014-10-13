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
void findminmax(node *root,int *min,int *max,int hd)
{
    if(root==NULL)
        return;
    if(*min>hd)
        *min=hd;
    if(*max<hd)
        *max=hd;
    findminmax(root->left,min,max,hd-1);
    findminmax(root->right,min,max,hd+1);
}
void connectverticalnodes(node *root,int d,int hd,node **prev)
{
    if(root==NULL)
        return;
    connectverticalnodes(root->left,d,hd-1,prev);
    connectverticalnodes(root->right,d,hd+1,prev);
    if(d==hd)
    {
        root->next=*prev;
        *prev=root;
    }
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
void printvertical(node *root,int hd,int d)
{
    if(root==NULL)
        return;
        if(hd==d)
            cout<<root->info<<" ";
        printvertical(root->left,hd-1,d);
        printvertical(root->right,hd+1,d);
}
int main()
{
    root=push(50);
    root->left=push(30);
    root->right=push(70);
    root->left->left=push(20);
    root->left->right=push(40);
    root->right->left=push(60);
    root->right->right=push(80);
    int min=0,max=0;
    findminmax(root,&min,&max,0);
    node *prev;
    for(int i=min;i<=max;i++)
    {
        prev=NULL;
        connectverticalnodes(root,i,0,&prev);
        printvertical(root,0,i);
        cout<<endl;
    }
    cout<<endl<<"yo"<<endl;
    preorder(root);
}

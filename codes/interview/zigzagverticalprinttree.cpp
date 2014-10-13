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
void zigzagvertical(node *root,int hd,int d,int f)
{
    if(root==NULL)
        return;
        if(f)
        {if(hd==d)
            cout<<root->info<<" ";
        zigzagvertical(root->left,hd-1,d,f);
        zigzagvertical(root->right,hd+1,d,f);
        }
        else
        {
        zigzagvertical(root->left,hd-1,d,f);
        zigzagvertical(root->right,hd+1,d,f);
        if(hd==d)
            cout<<root->info<<" ";
        }
}
int main()
{
    root=push(5);
    root->left=push(3);
    root->right=push(7);
    root->left->left=push(1);
    root->left->right=push(4);
    root->right->left=push(6);
    root->right->right=push(8);
    root->left->right->left=push(2);
    root->right->left->right=push(9);
    root->right->right->right=push(10);
    int min=0,max=0;
    findminmax(root,&min,&max,0);
    int f=1;
    for(int i=min;i<=max;i++)
    {
        zigzagvertical(root,0,i,f);
        cout<<endl;
        f=!f;
    }
}

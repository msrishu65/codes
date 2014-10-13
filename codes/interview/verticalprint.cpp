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
void printvertical(node *root,int hd,int d)
{
    if(root==NULL)
        return;
        if(hd==d)
            cout<<root->info<<" ";
        printvertical(root->left,hd-1,d);
        printvertical(root->right,hd+1,d);
}
void verticalsum(node *root,int hd,int d,int *sum)
{
    if(root==NULL)
        return;
    if(hd==d)
        *sum=*sum+root->info;
    verticalsum(root->left,hd-1,d,sum);
    verticalsum(root->right,hd+1,d,sum);
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
    for(int i=min;i<=max;i++)
    {
        int sum=0;
    //printvertical(root,0,i);
    verticalsum(root,0,i,&sum);
    cout<<sum<<endl;
    }
}

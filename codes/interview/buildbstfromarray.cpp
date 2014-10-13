#include<iostream>
#include<algorithm>
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
void buildbst(node **root,int a[],int start,int end)
{
    if(start>end)
        return;
    if(start==end)
        *root=push(a[start]);
    else
        if(start<end)
    {
        int mid=(start+end)/2;
        *root=push(a[mid]);
    buildbst(&((*root)->left),a,start,mid-1);
    buildbst(&((*root)->right),a,mid+1,end);
    }
}
void preorder(node *root)
{
    if(root==NULL)
        return ;
    cout<<root->info<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    int a[7]={50,30,70,20,40,60,80};
    sort(a,a+7);
    buildbst(&root,a,0,6);
    preorder(root);
}

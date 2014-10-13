#include<iostream>
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
void preorder(node *root)
{
    if(root==NULL)
        return ;
    cout<<root->info<<" ";
    preorder(root->left);
    preorder(root->right);
}

node *deletesomenodes(node *root,int k,int *sum)
{
    if(root==NULL)
        return NULL;
    int ls=*sum+root->info;
    int rs=ls;
    root->left=deletesomenodes(root->left,k,&ls);
    root->right=deletesomenodes(root->right,k,&rs);
     *sum=max(ls,rs);
     if(*sum<k)
     {
         delete(root);
         root=NULL;
     }
    return root;
}
int deletesomenodes1(node *root,int k,int sum)
{
    if(root==NULL)
    {
        if(sum<k)
        return 0;
        else
            return 1;
    }
    sum=sum+root->info;
   int l= deletesomenodes1(root->left,k,sum);
    int r=deletesomenodes1(root->right,k,sum);
    if(l==0 && r==0)
    {
        delete(root);
        return 0;
    }
    if(l==0)
    {
        root->left=NULL;
        return 1;
    }
   else if(r==0)
   {
       root->right==NULL;
       return 1;
   }
//        return max(l,r);
}
int main()
{
root=push(1);
root->left=push(2);
root->right=push(3);
root->left->left=push(4);
root->left->right=push(5);
root->right->left=push(6);
root->right->right=push(7);
int sum=0;
deletesomenodes1(root,10,sum);
preorder(root);
}

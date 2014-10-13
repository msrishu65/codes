#include<iostream>
using namespace std;
struct node
{
    int info;
    node *left;
    node *right;
};
node *newNode(int data)
{
 node *n=new node;
 n->info=data;
 n->left=NULL;
 n->right=NULL;
 return n;
}
int index(int post[],int x,int j,int k)
{
    for(int f=j;f<=k;f++)
        if(post[f]==x)
        return f;
    return -1;
}
/*node *maketree(int in[],int pre[],int j,int k)
{
    static int i=0;
    if(j>k)
        return NULL;
        node *temp=newNode(pre[i]);
    i++;
    if(j==k)
        return temp;
    int l=index(in,temp->info,j,k);
    temp->left=maketree(in,pre,j,l-1);
    temp->right=maketree(in,pre,l+1,k);
}*/
/*node *maketree(int in[],int post[],int j,int k)
{
    static int i=6;
    if(j>k)
        return NULL;
    node *temp=newNode(post[i]);
    i--;
    if(j==k)
        return temp;
        int l=index(in,temp->info,j,k);
    temp->right=maketree(in,post,l+1,k);
    temp->left=maketree(in,post,j,l-1);
}*/
node *maketree(int pre[],int post[],int j,int k)
{
    static int i=0;
    if(j>k)
        return NULL;
    node *temp=newNode(pre[i]);
    i++;
    if(j==k)
        return temp;
    int l=index(post,pre[i],j,k);
    temp->left=maketree(pre,post,j,l);
    temp->right=maketree(pre,post,l+1,k-1);
}
void inorder(node *root)
{
    if(root)
    {
        inorder(root->left);
        cout<<root->info<<" ";
        inorder(root->right);
    }
}
int main()
{
    //int in[7]={0,1,2,3,4,5,6};
    int pre[9]={10,7,5,4,6,8,12,11,13};
    int post[9]={4,6,5,8,7,11,13,12,10};
    node *root=NULL;
    root=maketree(pre,post,0,8);
 //   cout<<root->info;
 inorder(root);
}

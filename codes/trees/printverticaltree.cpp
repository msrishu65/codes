#include<iostream>
using namespace std;
struct node
{
    int info;
    node *left;
    node *right;
};
node *newnode(int data)
{
    node *t=new node;
    t->info=data;
    t->left=NULL;
    t->right=NULL;
    return t;
}
void findminmax(node *h,int *min,int* max,int hd)
{
    if(h==NULL)
        return;
    if(hd < *min)
        *min=hd;
   else if(hd> *max)
        *max=hd;
    findminmax(h->left,min,max,hd-1);
    findminmax(h->right,min,max,hd+1);
}
void printvertical(node *h,int line,int hd)
{
    if(h==NULL)
        return;
        if(hd==line)
            cout<<h->info<<" ";
        printvertical(h->left,line,hd-1);
        printvertical(h->right,line,hd+1);
}
int verticalsum(node *h,int line,int hd,int *sum)
{
    if(h==NULL)
        return 0;
    if(hd==line)
    {
        *sum=*sum+h->info;
    }
    verticalsum(h->left,line,hd-1,sum);
    verticalsum(h->right,line,hd+1,sum);
}
int main()
{
    node *root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(4);
    root->left->right = newnode(5);
    root->right->left = newnode(6);
    root->right->right = newnode(7);
    //root->right->left->right = newnode(8);
    //root->right->right->right = newnode(9);
    int min=0,max=0;
    findminmax(root,&min,&max,0);
    for(int i=min;i<=max;i++)
    {
        int sum=0;
        verticalsum(root,i,0,&sum);
        cout<<sum<<endl;
    }
}

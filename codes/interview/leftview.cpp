#include<iostream>
using namespace std;
struct node
{
    int info;
    node *left;
    node *right;
};
node *push(int d)
{
    node *temp=new node;
    temp->info=d;
    temp->left=NULL;
    temp->right=NULL;
}
void leftview(node *root,int *max,int level)
{
    if(root==NULL)
        return;
        if(*max<level)
        {
            cout<<root->info<<endl;
            *max=level;
        }
        leftview(root->left,max,level+1);
        leftview(root->right,max,level+1);
}
void rightview(node *root,int level,int *max)
{
    if(root==NULL)
        return;
        if(level>*max)
        {
            cout<<root->info<<endl;
            *max=level;
        }

                rightview(root->right,level+1,max);
    rightview(root->left,level+1,max);

}
int main()
{
node *root=new node;
root=push(1);
root->left=push(2);
root->right=push(3);
root->left->right=push(4);
root->right->left=push(5);
root->right->left->right=push(6);
int max=0;
//leftview(root,&max,0);
rightview(root,1,&max);
       /* 1
         / \
        2   3
        |   /
        4  5
            \6
            */
}

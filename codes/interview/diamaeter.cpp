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
int height(node *root)
{
    if(root==NULL)
        return 0;
    return max(height(root->left),height(root->right))+1;
}
int diameter(node *root,int *height)
{

    int lh=0,rh=0;
    int ld=0,rd=0;
    if(root==NULL)
    { *height=0;
        return 0;
    }
    ld=diameter(root->left,&lh);
    rd=diameter(root->right,&rh);
    *height=max(lh,rh)+1;
    cout<<lh<<" "<<rh<<endl;
    return max(lh+rh+1,max(ld,rd));
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
int height=0;
cout<<diameter(root,&height);
}

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
int a[999];
void printarray(int j)
{
    cout<<endl;
    for(int i=0;i<j;i++)
        cout<<a[i]<<" ";
}
void printpathtoleafpaths(node *root,int index)
{
    if(root==NULL)
        return;
      a[index]=root->info;
    index++;
    if(root->left==NULL && root->right==NULL)
            printarray(index);
    printpathtoleafpaths(root->left,index);
    printpathtoleafpaths(root->right,index);
}
void deletenodes(node *root,int *sum,int k)
{
    if(root==NULL)
        return;
    *sum = *sum+root->info;
    deletenodes(root->left,sum,k);
    deletenodes(root->right,sum,k);

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
printpathtoleafpaths(root,0);
//int sum=0;
//deletenodes(root,&sum,8);
}

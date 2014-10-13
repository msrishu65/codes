#include<iostream>
#include<queue>
#include<stack>
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
void reverselevelorder(node *root,int level)
{
    if(root==NULL)
        return;
        if(level==0)
            cout<<root->info<<" ";
            else
            {
        reverselevelorder(root->left,level-1);
        reverselevelorder(root->right,level-1);
}
}
void levelorder(node *root,int level)
{
    if(level==0)
        cout<<root->info<<" ";
        else
        {
    levelorder(root->left,level-1);
    levelorder(root->right,level-1);
}
}
void reverselevelordertraversal(node *root)
{
 if(root==NULL)
    return;
 queue<node *>q;
 stack<node *>s;
 q.push(root);
 while(!q.empty())
 {
     node *temp=q.front();
     q.pop();
     s.push(temp);
     if(temp->right)
        q.push(temp->right);
     if(temp->left)
        q.push(temp->left);
 }
 while(!s.empty())
 {
     node *temp=s.top();
     s.pop();
     cout<<temp->info<<" ";
 }
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
/*for(int i=2;i>=0;i--)
{
    reverselevelorder(root,i);
}
cout<<endl;
for(int i=0;i<3;i++)
{
    levelorder(root,i);
}*/
reverselevelordertraversal(root);
}

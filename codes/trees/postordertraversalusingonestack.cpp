#include<iostream>
#include<stack>
using namespace std;
struct node
{
    int info;
    node* left;
    node* right;
};
node *newNode(int data)
{
    node *n =new node;
    n->info  = data;
    n->left  = NULL;
    n->right = NULL;

    return(n);
}
void postorder(node *t)
{
    stack<node *>s;
    //cout<<s.top();
    //cout<<"yo";
    do
    {
        while(t)
        {
          if(t->right)
          {
              s.push(t->right);
          }
          s.push(t);
          //cout<<t->info<<endl;
          t=t->left;
        }
        //cout<<"yo";
        t=s.top();
        s.pop();
        //cout<<"yo";
        if(t->right && t->right==s.top())
            {
            node *temp2=s.top();
            s.pop();
            s.push(t);
            t=temp2;
           }
        else
            {
                cout<<t->info<<" ";
                 t=NULL;
            }
    }while(!s.empty());
}
int main()
{
 node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
 postorder(root);
 return 0;
}

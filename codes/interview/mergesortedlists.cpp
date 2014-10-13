#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
}*head,*end;
node *push(int info)
{
    node *temp=new node;
    temp->info=info;
    temp->next=NULL;
    return temp;
}
void display(node *head)
{
    node *h=head;
    while(h)
    {
        cout<<h->info<<" ";
        h=h->next;
    }
}
void createlist(node **head,node **end)
{
    int n,x;
    cin>>n;
    while(n--)
    {
           cin>>x;
           node *temp=push(x);
           if(*head==NULL)
           {
               *head=temp;
               *end=temp;
           }
           else
           {
               (*end)->next=temp;
               *end=temp;
           }
    }
}
node *merge(node *head1,node *head2)
{
    if(head1==NULL && head2==NULL)
        return NULL;
    if(head1==NULL)
        return head2;
    if(head2==NULL)
        return head1;
    if(head1->info<head2->info)
    {
     head1->next=merge(head1->next,head2);
     return head1;
    }
    else
    {
        head2->next=merge(head1,head2->next);
        return head2;
    }
}
int main()
{
    node *head1=NULL,*end1,*head2=NULL,*end2;
    createlist(&head1,&end1);
    display(head1);
    cout<<endl;
    createlist(&head2,&end2);
    display(head2);
    cout<<endl;
    head=merge(head1,head2);
    display(head);
}

#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
}*head1,*end1,*head2,*end2;
node *push(int data)
{
    node *t=new node;
    t->info=data;
    t->next=NULL;
    return t;
}
int ispalindrome(node **head,node *rear)
{
    if(rear==NULL)
        return 1;
    int l=ispalindrome(head,rear->next);
    if(l==0)
        return 0;
    if((*head)->info!=rear->info)
        return 0;
        *head=(*head)->next;
    return 1;
}
void display(node *h)
{
    while(h)
    {
        cout<<h->info<<" ";
        h=h->next;
    }
}
int main()
{
    head1=push(1);
    head1->next=push(2);
    head1->next->next=push(3);
    head1->next->next->next=push(3);
    head1->next->next->next->next=push(2);
    head1->next->next->next->next->next=push(1);
    display(head1);
    if(ispalindrome(&head1,head1))
        cout<<"yo";
    else
        cout<<"no";
}

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
int main()
{
    head1=push(1);
    head1->next=push(2);
    head1->next->next=push(3);
    head1->next->next->next=push(4);
    head1->next->next->next->next=push(5);
    head1->next->next->next->next->next=push(6);
    node *h=head1;
    while(h)
    {
        if(h->next)
        {
            node *cur=h->next;
            int d=h->info;
            h->info=cur->info;
            cur->info=d;
            h=h->next->next;
        }
        else
            break;
    }
    h=head1;
    while(h)
    {
        cout<<h->info<<" ";
        h=h->next;
    }
}

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
int size(node *head)
{
    int c=0;
    while(head)
    {
        c++;
        head=head->next;
    }
    return c;
}
node *addsamesize(node *head1,node *head2,int *carry)
{
    if(head1==NULL)
        return NULL;
        node *res=new node;
    res->next=addsamesize(head1->next,head2->next,carry);
    res->info=head1->info+head2->info+*carry;
    *carry=(res->info)/10;
    res->info=(res->info)%10;
    return res;
}
void addcarrytoremaining(node *h,node *head1,node **res,int *carry)
{
    if(h==head1)
        return;
    addcarrytoremaining(h,head1->next,res,carry);
    int sum=head1->info+ *carry;
    *carry=sum/10;
    sum=sum%10;
    node *t=new node;
    t->info=sum;
    t->next=*res;
    *res=t;
}
node *sumof2lists(node *head1,node *head2)
{
    int size1=size(head1);
    int size2=size(head2);
    node *res;
    int carry=0;
    if(size1==size2)
    {
       res= addsamesize(head1,head2,&carry);
    }
    else
    {
        node *h;
        if(size1>size2)
            h=head1;
        else
            h=head2;
        int diff=size1-size2;
       while(diff--)
        h=h->next;
       res=addsamesize(h,head2,&carry);
       addcarrytoremaining(h,head1,&res,&carry);
    }
    if(carry)
    {
        node *t=new node;
        t->info=carry;
        t->next=res;
        res=t;
    }
    return res;
}
int main()
{
    head1=push(1);
    head1->next=push(2);
    head1->next->next=push(3);
    head1->next->next->next=push(4);
    head2=push(4);
    head2->next=push(5);
    head2->next->next=push(6);
    node *h=sumof2lists(head1,head2);
    while(h)
    {
        cout<<h->info;
        h=h->next;
    }
}

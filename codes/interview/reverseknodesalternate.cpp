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
node *reversekalternatenodes(node *head,int k,int f)
{
    if(head==NULL)
        return NULL;
    node *h=head;
    node *temp,*prev=NULL;
    int m=k;
    while(m-- && h)
    {
        temp=h->next;
        if(f)
          h->next=prev;
        prev=h;
        h=temp;
    }
    if(f)
    {
    head->next=reversekalternatenodes(h,k,!f);
    return prev;
    }
    else
    {
        prev->next=reversekalternatenodes(h,k,!f);
        return head;
    }
}
node *reverseknodes(node *head,int k)
{

    if(head==NULL)
        return NULL;
    int m=k;
    node *h=head;
    node *temp,*prev=NULL;
    while(m-- && h)
    {
        temp=h->next;
        h->next=prev;
        prev=h;
        h=temp;
    }
    head->next=reverseknodes(h,k);
    return prev;
}
int main()
{
 head=push(1);
 head->next=push(2);
 head->next->next=push(3);
head->next->next->next=push(4);
head->next->next->next->next=push(5);
head->next->next->next->next->next=push(6);
head->next->next->next->next->next->next=push(7);
head->next->next->next->next->next->next->next=push(8);
head->next->next->next->next->next->next->next->next=push(9);
end=head->next->next->next->next->next->next->next->next;
//display(head);
//head=reversekalternatenodes(head,3,1);
head=reverseknodes(head,3);
display(head);
}

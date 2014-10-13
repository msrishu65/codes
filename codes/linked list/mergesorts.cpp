#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
};
node *createnode(int data)
{
    node *t=new node;
    t->info=data;
    t->next=NULL;
    return t;
}
void push(int x,node **head,node **end)
{
      node *m=createnode(x);
        if(*head==NULL)
        {
            *head=m;
            *end=m;
        }
        else
        {
            (*end)->next=m;
            *end=(*end)->next;
        }
}
void createlist(node **head,node **end)
{
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
       push(x,head,end);
    }
}
void splithalf(node *s,node **first,node **second)
{

     node *sp=NULL;
     node *fp=NULL;
    if(s==NULL ||s->next==NULL)
    {
        *first=s;
        *second=NULL;
    }
    else
    {
     sp=s;
     fp=s->next;
     while(fp)
     {
         fp=fp->next;
         if(fp)
         {
             sp=sp->next;
             fp=fp->next;
         }
     }
        *first=s;
        *second=sp->next;
        sp->next=NULL;
    }
}
node *merge(node *a,node *b)
{
    if(a==NULL)
        return b;
    if(b==NULL)
        return a;
    node *res=NULL;
        if(a->info<b->info)
        {
            res=a;
            res->next=merge(a->next,b);
        }
        else
        {
            res=b;
            res->next=merge(a,b->next);
        }
        return res;
}
node *mergesort(node **head)
{
    node *h=*head;
    if(h==NULL || h->next==NULL)
        return NULL;
        node *a;
        node *b;
        splithalf(h,&a,&b);
        mergesort(&a);
        mergesort(&b);
        *head=merge(a,b);
}

void display(node *head)
{
    node *h=head;
    while(h)
    {
        cout<<h->info<<"->";
        h=h->next;
    }
}

int main()
{
    node *head=NULL,*end;
    createlist(&head,&end);
    //cout<<head->info;
    mergesort(&head);
    display(head);
}

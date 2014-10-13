#include<iostream>
#include<conio.h>

using namespace std;

struct list
{
int info;
list *next;
}*node,*head,*end;
list *createnode(int data)
{
list *node=new list;
node->info=data;
node->next=NULL;
return node;
}
void push(int d)
{
list *node=createnode(d);
if(head==NULL)
{
head=node;
end=node;
}
else
{
end->next=node;
end=node;
}
}
void createlist()
{
cout<<"how many items?"<<endl;
int n,m;
cin>>n;
while(n--)
{
cin>>m;
push(m);
}
}
void display()
{
    list *h=head;
    while(h!=NULL)
    {cout<<h->info<<"->";
h=h->next;
}
}
void removeloop(list *);
int detectloop()
{
    list *s=head;
    list *f=head;
    while(1)
    {
        s=s->next;
        f=f->next->next;
        if(s==f)
        {
            //cout<<s->info;
            removeloop(s);
            return 1;
        }
    }
    return 0;
}
void removeloop(list *ptr)
{
int c=1;
list *p1=ptr;
list *p2=ptr;
while(p1->next!=p2)
{
    c++;
    p1=p1->next;
}
p2=head;
p1=head;
while(c--)
{
    p2=p2->next;
}
while(p1!=p2)
{
    node=p2;
    p2=p2->next;
    p1=p1->next;
}
node->next=NULL;
}
int main()
{
    createlist();
    display();
    end->next=head->next->next;
    detectloop();
display();
    return 0;
}


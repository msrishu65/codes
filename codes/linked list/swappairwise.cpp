#include<iostream>
#include<conio.h>

using namespace std;

struct list
{
int info;
list *next;
}*node,*head,*save,*end;
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
void swappairs()
{
    list *cur=head;
    head=cur->next;
    list *prev=new list;
    prev=cur;
    cur=cur->next;
    while(1)
    {
        node=cur->next;
        cur->next=prev;
        if(node==NULL||node->next==NULL)
        {
            prev->next=node;
            break;
        }
        prev->next=node->next;
        cur=node->next;
        prev=node;
        }

}
void reversealternatenodes()
{
    list *cur=head,*temp1,*temp2;
    while(cur!=NULL)
    {
        node=cur;
        cur=cur->next;
    }
    cur=head;
    //cout<<cur->info<<" "<<node->info;
    while(1)
    {
        if(cur==node || cur->next==node)
            break;
        temp1=cur->next;
        cur->next=temp1->next;
        cur=cur->next;
        if(node->next==NULL)
        {
        node->next=temp1;
        temp1->next=NULL;
        }
        else
            {
                temp2=node->next;
                node->next=temp1;
                temp1->next=temp2;
            }

    }
}
int main()
{
    createlist();
    display();
    //swappairs();
    reversealternatenodes();
    cout<<"yes"<<endl;
    display();
    return 0;

}

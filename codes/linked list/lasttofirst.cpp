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
save=end;
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
void lasttofirst()
{

end->next=head;
head=end;
save->next=NULL;
}
int main()
{
createlist();
display();
lasttofirst();
cout<<endl;
display();
return 0;
}

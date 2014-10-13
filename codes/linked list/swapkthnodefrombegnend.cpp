#include<iostream>
using namespace std;
struct list
{
int info;
list *next;
list *random;
}*node,*head,*end,*head2,*end2,*save1,*save2;
list *createnode(int item)
{
	list *node=new list;
	node->info=item;
	node->next=NULL;
	return node;
}
void push(int data)
{
    list *node=createnode(data);
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
      end->next=NULL;
      }
void createlist()
{
    int n;
cout<<"no of items?"<<endl;
cin>>n;
while(n--)
{
    int d;
cin>>d;
push(d);
}

}
void display(list *h)
{
    while(h!=NULL)
    {
        cout<<h->info<<"->"<<" ";
        h=h->next;
    }
}
void swapkthnode(int k)
{
    list *ptr1=head;
    list *ptr2=head;
    int m=k-1;
    while(m--)
    {
        save1=ptr1;
        ptr1=ptr1->next;
    }
    list *p=ptr1;
    while(p->next!=NULL)
    {
        p=p->next;
        save2=ptr2;
        ptr2=ptr2->next;
    }
    save1->next=ptr2;
    save2->next=ptr1;
    list *temp=new list;
    temp=ptr2->next;
    ptr2->next=ptr1->next;
    ptr1->next=temp;

}
int main()
{
    createlist();
    display(head);
    int j;
    cin>>j;
    swapkthnode(j);
    cout<<endl;
    display(head);
    return 0;
}

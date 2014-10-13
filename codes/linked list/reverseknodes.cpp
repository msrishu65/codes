#include<iostream>
using namespace std;
struct list
{
int info;
list *next;
list *random;
}*node,*head,*prev,*end,*head2,*end2;
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
list *reverseknodes(list *h,int k)
{
    int m=k;
    list *cur=h;
    list *prev=NULL;
    while(cur!=NULL &&m--)
    {
        node=cur->next;
        cur->next=prev;
        prev=cur;
        cur=node;
    }
    //h->next=cur;
    if(cur!=NULL)
    {
        h->next=reverseknodes(cur,k);
    }
    return prev;
}
list *alternatereverseknods(list *h,int k)
{
    int m=k;
    list *cur=h;
    list *prev=NULL;
    while(cur!=NULL && m--)
    {
        node=cur->next;
        cur->next=prev;
        prev=cur;
        cur=node;
    }
    if(h!=NULL)h->next=cur;
    m=k-1;
    //h->next=cur;
    while(cur!=NULL && m--)
    {
        //prev=cur;
        cur=cur->next;
    }
    if(cur!=NULL)
    cur->next=alternatereverseknods(cur->next,k);
    return prev;
}
int main()
{

    createlist();
    display(head);
    list *head2=alternatereverseknods(head,3);
    cout<<endl;
    display(head2);
}

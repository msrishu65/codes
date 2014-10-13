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
}

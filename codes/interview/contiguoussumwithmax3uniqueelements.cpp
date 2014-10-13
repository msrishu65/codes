#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
}*head,*end;
void push(int d)
{
    node *t=new node;
    t->info=d;
    t->next=NULL;
    if(head==NULL)
    {
        head=t;
        end=t;
    }
    else
    {
        end->next=t;
        end=end->next;
    }
}
int searchnreplace(int d)
{
    node *h=head;
    while(h)
    {
        if(h->info==d)
        {
            while(h->next)
            {
                int s=h->info;
                h->info=h->next->info;
                h->next->info=s;
                h=h->next;
            }
            return 1;
            break;
        }
        h=h->next;
    }
    return 0;
}
int main()
{
    int a[]={1,2,3,1,4,3,4,1,2};
    push(1);
    push(2);
    push(3);
    int maxlen=3;
    int start=0;
    int size=3;
    int maxstart;
    for(int i=3;i<9;i++)
    {
        if(searchnreplace(a[i]))
        {
            int len=i-start+1;
            if(len>maxlen)
            {
                maxlen=len;
                maxstart=start;
                cout<<maxlen<<"yo"<<endl;
            }
        }
        else
        {
         node *temp=head->next;
         delete(head);
         head=temp;
         start=i-2;//ye sir is array k lie liya h..generalise krne k lie new head ka index lena padega
         push(a[i]);
         int len=i-start+1;
            if(len>maxlen)
            {
                maxlen=len;
                maxstart=start;
                cout<<maxlen<<"no"<<endl;
            }
        }
    }
    cout<<maxlen;
}

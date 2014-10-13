#include<iostream>
#include<algorithm>
using namespace std;
struct node
{
    int n;
    int r;
    int c;
};
void minheapify(node heap[],int index,int size)
{
    int l=2*index+1;
    int r=2*index+2;
    int smallest=index;
    if(heap[l].n>heap[index].n && l<size)
        smallest=l;
    if(heap[r].n>heap[smallest].n && r<size)
        smallest=r;
    if(smallest!=index)
    {
        node h=heap[index];
        heap[index]=heap[smallest];
        heap[smallest]=h;
        minheapify(heap,smallest,size);
    }
}
void buildheap(node heap[],int size)
{
    for(int i=(size-1)/2;i>=0;i--)
        minheapify(heap,i,size);
}
int main()
{
int a[3][3]={{1,2,3},
           {2,3,4},
           {4,5,6}
          };
node heap[3];
for(int i=0;i<3;i++)
{
    heap[i].n=a[0][i];
    heap[i].r=0;
    heap[i].c=i;
}
buildheap(heap,3);
int k=7;
node h;
while(k--)
{
    h=heap[0];
    int nextval=(h.r<2)?a[(h.r)+1][h.c]:99999;
    heap[0]={nextval,(h.r)+1,h.c};
    minheapify(heap,0,3);
}
cout<<h.n;
}

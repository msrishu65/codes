#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
struct indexlist
{
    int index;
    indexlist *next;
};
struct trienode
{
    bool isend;
    trienode *child[26];
    indexlist *head;
};
trienode *newtrienode()
{
    trienode *temp=new trienode;
    temp->isend=0;
    temp->head=NULL;
    for(int i=0;i<26;i++)
        temp->child[i]=NULL;
    return temp;
};
indexlist *newindexnode(int index)
{
    indexlist *temp=new indexlist;
    temp->index=index;
    temp->next=NULL;
    return temp;
}
void insert(trienode **root,char *word,int index)
{
    if(*root==NULL)
        *root=newtrienode();
    if(*word !='\0')
    {
       insert(&((*root)->child[tolower(*word)-'a']),word+1,index);
    }
    else
    {
        if((*root)->isend)
        {
            indexlist *h=(*root)->head;
            while(h->next)
            h=h->next;
            h->next=newindexnode(index);
        }
        else
        {
            (*root)->isend=1;
            (*root)->head=newindexnode(index);
        }
    }
}
void printanagrams(trienode* root,char *wordarr[])
{
    if(root==NULL)
        return ;
    if(root->isend)
    {
        indexlist *h=root->head;
        while(h)
        {
            cout<<wordarr[h->index]<<" ";
            h=h->next;
        }
    }
    for(int i=0;i<26;i++)
        printanagrams(root->child[i],wordarr);
}
void printanagramstogether(char* wordarr[],int size)
{
    trienode *root=NULL;
    for(int i=0;i<size;i++)
    {
        int len=strlen(wordarr[i]);
        char *buffer=new char[len+1];
        strcpy(buffer,wordarr[i]);
        sort(buffer,buffer+len);
        insert(&root,buffer,i);
    }
    printanagrams(root,wordarr);
}
int main()
{
    char* wordarr[] = {"cat", "dog", "tac", "god", "act", "gdo"};
    int size = sizeof(wordarr) / sizeof(wordarr[0]);
    printanagramstogether(wordarr,size);
    return 0;
}

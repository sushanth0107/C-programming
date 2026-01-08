#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *phead;
void add(int x);
void head(int y);
void removehead();
void position();
void removtail();
void insertmiddle(int x);
void display();
int main()
{
    add(10);
    add(20);
    add(30);
    add(40);
    add(50);
    display();
    head(5);
    printf("\n");
    display();
    removehead();
    printf("\n");
    display();
    removtail();
    printf("\n");
    display();
    printf("\n");
    insertmiddle(3);
    display();
    printf("\n");
    position();
    display();
    
}
void add(int x)
{
    struct node *ptr,*ptrav;
    ptr=malloc(sizeof(struct node));
    ptr->data=x;
    ptr->link=NULL;
    if(phead==NULL)
    {
        phead=ptr;
    }
    else
    {
    ptrav=phead;
    while(ptrav->link!=NULL)
    {
        ptrav=ptrav->link;
    }
    ptrav->link=ptr;
    }
    
}
void head(int y)
{
    struct node *ptr;
    ptr=malloc(sizeof(struct node));
    ptr->data=y;
    ptr->link=NULL;
    ptr->link=phead;
    phead=ptr;
}
void removehead()
{
    struct node *ptr=phead;
    phead=ptr->link;
    free(ptr);
    
    
}
void removtail()
{
    struct node *prev,*ptrav=phead;
    while(ptrav->link!=NULL)
    {
        prev=ptrav;
        ptrav=ptrav->link;
    }
    prev->link=ptrav->link;
    free(ptrav);
}
void insertmiddle(int x)
{
    struct node *ptr,*prev;
    ptr=malloc(sizeof(struct node));
    ptr->data=x;
    ptr->link=NULL;
    struct node *slow=phead,*fast=phead;
    while(fast!=NULL && fast->link!=NULL && fast->link->link!=NULL )
    {
        slow=slow->link;
        prev=slow->link;
        fast=fast->link->link;
    }
    slow->link=ptr;
    ptr->link=prev;
    
}
void position()
{
    struct node *ptr,*ptrav=phead,*s;
    ptr=malloc(sizeof(struct node));
    ptr->data=5;
    ptr->link=NULL;
    int pos;
    scanf("%d",&pos);
    for(int i=0;i<pos-1;i++)
    {
        s=ptrav;
        ptrav=ptrav->link;
        
    }
      s->link=ptr;
      ptr->link=ptrav;
}
    
void display()
{
    struct node *ptr=phead;
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->link;
    }
}

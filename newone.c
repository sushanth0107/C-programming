#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node *phead;
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
void head()
{
  struct node *ptr=phead;
  phead=ptr->link;

}
void tail()
{
    struct node *ptr=phead,*prev;
    while(ptr->link!=NULL)
    {
        prev=ptr;
        ptr=ptr->link;
    }
    prev->link=NULL;
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
int main()
{
    while(1)
    {
        printf("\n\n 1.for add\n");
        printf("2.for rem\n");
        printf("3.for display\n");
        printf("4.for exit");
        int val,ch;
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:scanf("%d",&val);
                   add(val);
                   break;
            case 2:head();
                   break;
            case 3:display();
                   break;
            case 4: exit(0);
            case 5: tail();
                   break;
        }
    }
}

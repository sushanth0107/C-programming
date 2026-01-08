#include<stdio.h>
#include<stdlib.h>
struct node
{
        int info;
        struct node *link;
};
void addnode(int x);
void insert(int data);
void display();
struct node *phead;
int main()
{
        addnode(10);
        addnode(20);
        addnode(30);
        addnode(40);
        addnode(50);
        addnode(60);
        display();
        insert(35);
        display();
     
}
void addnode(int x)
{
        struct node *ptr,*ptrav;
        ptr=malloc(sizeof(struct node));
        ptr->info=x;
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
void insert(int data)
{
        struct node *ptr,*fast=phead,*prev;
        struct node *slow=phead;
        ptr=malloc(sizeof(struct node));
        ptr->info=data;
        ptr->link=NULL;
        while(fast!=NULL && fast->link!=NULL)
        {
                slow=slow->link;
		prev=slow->link;
                fast=fast->link->link;
        }
        ptr->link=prev;
	slow->link=ptr;
}
void display()
{
        struct node *ptr;
        ptr=phead;
        while(ptr!=NULL)
        {
                printf("%d->",ptr->info);
                ptr=ptr->link;
        }
        printf("\n");
}

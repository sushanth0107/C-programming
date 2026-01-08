#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *phead;
void addnode(int x);
void head(int x);
void display();
int main()
{
	addnode(10);
	addnode(20);
	addnode(30);
	addnode(40);
	addnode(50);
	display();
	head(0);
	display();
}
void addnode(int x)
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
void head(int x)
{
        struct node *ptr,*ptrav;
        ptr=malloc(sizeof(struct node));
        ptr->data=x;
        ptr->link=NULL;
        ptr->link=phead;
        phead=ptr;
}
void display()
{
        struct node *ptr;
        ptr=phead;
        while(ptr!=NULL)
        {
                printf("%d->",ptr->data);
                ptr=ptr->link;
        }
        printf("NULL");
}

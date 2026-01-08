#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
int addnode(int x);
int insertnode(int x);
struct node *phead;
void display();
int main()
{
	addnode(10);
	addnode(20);
	addnode(30);
	addnode(40);
	addnode(50);
	insertnode(35);
	display();
}
int addnode(int x)
{
	struct node *ptr,*ptrav;
	ptr=malloc(sizeof(struct node));
	ptr->data=x;
	ptr->link=NULL;
	if(phead==NULL)
	{
		phead=ptr;
		return 1;
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
int insertnode(int x)
{
	struct node *ptr,*ptrav,*prev;
	ptr=malloc(sizeof(struct node));
	ptr->data=x;
	ptr->link=NULL;
	if(phead==NULL)
	{
		phead=ptr;
		return 1;
	}
	ptrav=phead;
	while(ptrav->data<x)
	{
		prev=ptrav;
		ptrav=ptrav->link;
	}
	prev->link=ptr;
	ptr->link=ptrav;
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


#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *link;
};
struct node *phead;
void addnode(int x);
void insert(int data);
void display();
int main()
{
	addnode(10);
	addnode(20);
	addnode(30);
	addnode(40);
	addnode(50);
	display();
	insert(25);
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
	struct node *ptr,*ptrav,*prev;
	ptr=malloc(sizeof(struct node));
	ptr->info=data;
	ptr->link=NULL;
	ptrav=phead;
	while(data>ptrav->info)
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
		printf("%d->",ptr->info);
		ptr=ptr->link;
	}
	printf("null");
}


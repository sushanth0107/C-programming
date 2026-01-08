#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
struct node *phead=NULL;
void add(int x);
void rem();
void tail();
void insert(int info);
void display();
int main()
{
	add(10);
	add(20);
	add(30);
	add(40);
	add(50);
	display();
	rem();
	display();
	tail();
	display();
	printf("after insertion\n");
	insert(25);
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
void rem()
{
	struct node *ptr;
	ptr=phead;
	phead=ptr->link;
	free(ptr);
}
void insert(int info)
{
	struct node *ptr,*ptrav,*prev;
	ptr=malloc(sizeof(struct node));
	ptr->data=info;
	ptr->link=NULL;
	ptrav=phead;
	while(info>ptrav->data)
	{
		prev=ptrav;
		ptrav=ptrav->link;
	}
	ptr->link=ptrav;
	prev->link=ptr;
}


void tail()
{
	struct node *ptrav,*ptr,*prev;
	ptrav=phead;
        while(ptrav->link!=NULL)
	{
		prev=ptrav;
		ptrav=ptrav->link;
	}
	prev->link=ptrav->link;
	free(ptrav);
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


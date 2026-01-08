#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *link;
};
int addnode(int x);
int removenode(int data);
void display();
struct node *phead;
int main()
{
	addnode(10);
	addnode(20);
	addnode(30);
	addnode(40);
	addnode(50);
	removenode(40);
	display();
}
int addnode(int x)
{
	struct node *ptr,*ptrav;
	ptr=malloc(sizeof(struct node));
	ptr->info=x;
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
int removenode(int data)
{
	struct node *p,*prev;
	p=phead;
	while(p->info!=data)
	{
		prev=p;
		p=p->link;
	}
	prev->link=p->link;
	free(p);
	p=NULL;
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
}



#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *phead;
void addnode(int x);
void sort();
void display();
int main()
{
	addnode(10);
	addnode(30);
	addnode(20);
	addnode(50);
	addnode(40);
	display();
	sort();
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
void sort()
{
	struct node *ptr,*i,*j;
	ptr=phead;
	int temp;
	for(i=phead;i->link!=NULL;i=i->link)
	{
		for(j=i->link;j!=NULL;j=j->link)
		{
			if(i->data>j->data)
			{
				temp=i->data;
				i->data=j->data;
				j->data=temp;
			}
		}
	}
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
}

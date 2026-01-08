#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
void addnode(int x);
void reversenode();
void display();
void middle();
struct node *phead;
int main()
{
	addnode(10);
	addnode(20);
	addnode(30);
	addnode(40);
	addnode(50);
	display();
	printf("\n");
	middle();
	reversenode();
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
void middle()
{
	struct node *slow=phead,*fast=phead;
	while(fast!=NULL && fast->link!=NULL && fast->link->link!=NULL)
	{
		slow=slow->link;
		fast=fast->link->link;
	}
	printf("%d",slow->data);
	printf("\n");
}
void reversenode()
{
	//struct node(struct node *head)
	struct node *prev=NULL,*curr=phead,*next=NULL;
	while(curr!=NULL)
	{
		next=curr->link;
		curr->link=prev;
		prev=curr;
		curr=next;
	}
	phead=prev;
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
	


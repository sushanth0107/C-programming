#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
struct node *phead;
void add(int x);
void middle();
void reverse();
void display();
int main()
{
	add(10);
	add(20);
	add(30);
	add(40);
	add(50);
	display();
	printf("\n");
	middle();
	reverse();
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
void middle()
{
	struct node *slow=phead,*fast=phead;
	while(fast!=NULL && fast->link!=NULL && fast->link->link!=NULL)
	{
		slow=slow->link;
		fast=fast->link->link;
	}
	printf("%d\n",slow->data);
}
void reverse()
{
	struct node *curr=phead,*next=NULL,*prev=NULL;
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
	struct node *ptr=phead;
	while(ptr!=NULL)
	{
		printf("%d->",ptr->data);
		ptr=ptr->link;
	}
}

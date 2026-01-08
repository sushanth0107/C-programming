#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *nxt;
};
int addnode(int x);
void display();
void addnodehead();
struct node *phead;
int main()
{
	addnode(10);
	addnode(20);
	addnode(30);
	addnode(40);
	addnode(50);
	addnodehead(60);
	display();
	
}
int addnode(int x)
{
	struct node *ptr,*ptrav;
	ptr=malloc(sizeof(struct node));
	ptr->data=x;
	ptr->nxt=NULL;
	if(phead==NULL)
	{
		phead=ptr;
		return 1;
	}
	else
	{
		ptrav=phead;
		while(ptrav->nxt!=NULL)
		{
			ptrav=ptrav->nxt;
		}
		ptrav->nxt=ptr;
	}
}
void addnodehead(int x)
{
	struct node *pnew;
	pnew=malloc(sizeof(struct node));
	pnew->data=x;
	pnew->nxt=NULL;
	pnew->nxt=phead;
	phead=pnew;
}
void display()
{
	struct node *ptr;
	ptr=phead;
	while(ptr!=NULL)
	{
		printf("%d->",ptr->data);
		ptr=ptr->nxt;
	}
	printf("null");
}


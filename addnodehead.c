#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
int addnode(int x);
int addnodetohead(int x);
int display();
struct node *phead;
int main()
{
	addnode(10);
	addnode(20);
	addnode(30);
	addnode(40);
	addnode(50);
        display();
	addnodetohead(60);
	display();
}
int addnodetohead(int x)
{
	struct node *ptr;
	ptr=malloc(sizeof(struct node));
	ptr->data=x;
	ptr->link=NULL;
	if(phead==NULL)
	{
		phead=ptr;
	}
	ptr->link=phead;
	phead=ptr;
}
int display()
{
	struct node *ptr;
	ptr=phead;
	while(ptr->link!=NULL)
	{
		printf("%d->",ptr->data);
		ptr=ptr->link;
	}
	printf("null");
}




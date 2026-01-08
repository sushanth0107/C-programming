#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *ptr;
};
void addnode(int x);
display();
struct node *phead();
int main()
{
	addnode(10);
	addnode(20);
	addnode(30);
	addnode(40);
	addnode(50);
        display();
}
void node (int x)
{
	struct node *ptr,*ptrav;
	ptr=malloc(sizeof(struct node));
	ptr->data=x;
	ptr->link=NULL;
	if(phead=null)
	{
		phead=ptr;
		return;
	}
	else
	{
		ptrav=phead;
		while(ptrav->link!=NULL)
		{
			ptrav=ptrav->link;
		}
		ptrav->ptr;
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
		printf("null");
}

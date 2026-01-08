#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *link;
};
struct node *phead;
void add(int x);
void display();
void nth();
int main()
{
	add(10);
	add(20);
	add(30);
	add(40);
	add(50);
	display();
	nth();
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
void nth()
{
	struct node *ptr;
	ptr=phead;
	int count=0;
	int pos;
	scanf("%d",&pos);
	while(ptr!=NULL)
	{
		count++;
		ptr=ptr->link;

	}
	ptr=phead;
	int nth=count-pos;
	for(int i=0;i<nth;i++)
	{
		ptr=ptr->link;
	}
	printf("pos%d  value%d",pos,ptr->data);
}


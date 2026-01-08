#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *link;
};
struct node *phead;
void add(int x);
void display(int n);
void loop();
int loopdetect();
int main()
{
	add(10);
	add(20);
	add(30);
	add(40);
	add(50);
	display(6);
	loop();
	display(10);
	if(loopdetect())
	{
		printf("loop is found");
	}
	else
	{
		printf("loop is not found");
	}
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
void display(int n)
{
	struct node *ptr;
	ptr=phead;
	int count=0;
	while(ptr!=NULL&&count<n)
	{
		printf("%d->",ptr->data);
		ptr=ptr->link;
		count++;
	}
}
void loop()
{
	struct node *ptr,*s=NULL;
	ptr=phead;
	int pos;
	scanf("%d",&pos);
	int count=1;
	while(ptr!=NULL)
	{
		if(count==pos)
		{
			s=ptr;
		}
		if(ptr->link==NULL)
		{
			ptr->link=s;
			break;
		}
	
			ptr=ptr->link;
			count++;
	
	}
}
int loopdetect()
{
	struct node *slow=phead,*fast=phead;
	struct node *ptr=phead;
	while(ptr!=NULL)
	{
		slow=slow->link;
		fast=fast->link->link;
	if(slow==fast)
	{
		return 1;
	}
	}
	return 0;
	

}


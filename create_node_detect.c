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
int foundloop();
void loopdetatch();
int main()
{
	add(10);
	add(20);
	add(30);
	add(40);
	add(50);
	display(5);
	loop();
	display(15);

	if(foundloop())
	{
		printf("loop is there");
	}
	else
	{
		printf("loop is not there");
	}
	loopdetatch();
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

	while(ptr!=NULL && count<n)
	{
		printf("%d->",ptr->data);
		ptr=ptr->link;
		count++;
}
}
void loop()
{
	struct node *ptr,*loops;
	ptr=phead;
	int pos;
	int count=1;
	scanf("%d",&pos);

	while(ptr!=NULL)
	{
		if(count==pos)
		{
			loops=ptr;
		}
		if(ptr->link==NULL)
		{
			ptr->link=loops;
			break;
		}
		count++;
		ptr=ptr->link;
	}
}
int foundloop()
{
	struct node *ptr=phead,*slow=phead,*fast=phead;
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
void loopdetatch()
{
	struct node *ptr=phead,*slow=phead,*fast=phead;
	while(ptr!=NULL)
	{
		slow=slow->link;
		fast=fast->link->link;
		if(slow==fast)
		{
			slow=phead;
			while(slow->link!=fast->link)
			{
				slow=slow->link;
				fast=fast->link;
			}
			fast->link=NULL;
			return;

		}
	}
}



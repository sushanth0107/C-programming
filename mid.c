#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *link;
};
void addnode(int x);
void insert(int data);
void display();
void duplicate();
struct node *phead;
int main()
{
	addnode(10);
	addnode(20);
	addnode(30);
	addnode(40);
	addnode(50);
	addnode(10);
	display();
	insert(25);
	display();
	printf("add at last");
	duplicate();
	 display();
}
void addnode(int x)
{
	struct node *ptr,*ptrav;
	ptr=malloc(sizeof(struct node));
	ptr->info=x;
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
void insert(int data)
{
	struct node *ptr,*fast=phead,*prev;
	struct node *slow=phead;
	ptr=malloc(sizeof(struct node));
        ptr->info=data;
	ptr->link=NULL;
	while(fast!=NULL && fast->link!=NULL && fast->link->link!=NULL)
	{
		prev=fast;
		slow=slow->link;
		fast=fast->link->link;
	}
        slow->link=ptr;
	ptr->link=prev;
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
	printf("\n");
}
void duplicate()
{
	struct node *ptr=phead,*prev,*ptr2;
	while(ptr!=NULL && ptr->link!=NULL)
	{
		prev=ptr;
		ptr2=ptr->link;
		while(ptr2!=NULL)
		{
			if(ptr->info == ptr2->info)
			{
				prev->link=ptr2->link;
				free(ptr2);
		              ptr2=prev->link;
			}
			else
			{
				prev=ptr2;
				ptr2=ptr2->link;
			}
			
		}
		ptr=ptr->link;
	}
}

   

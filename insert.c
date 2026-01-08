#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *link;
};
int addnode(int x);
int insertnode(int data);
void display();
struct node *phead;
int main()
{
	 addnode(10);
	 addnode(20);
	 addnode(30);
	 addnode(40);
	 addnode(50);
	 insertnode(35);
	display();
}
int addnode(int x)
{
	struct node *ptr,*ptrav;
	ptr=malloc(sizeof(struct node));
	ptr->info=x;
	ptr->link=NULL;
	if(phead==NULL)
	{
		phead=ptr;
		return 1;
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
int insertnode(int data)
{
	struct node *ptr,*ptrav,*prev;
	ptr=malloc(sizeof(struct node));
	ptr->info=data;
	ptr->link=NULL;
	ptrav=phead;
	while(data>ptrav->info)
	{
		prev=ptrav;
		ptrav=ptrav->link;
	}

        ptr->link=ptrav;
        prev->link=ptr;

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
	printf("NULL");
}



#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
int addnode(int x);
void display();
void addnodehead(int x);
struct node *phead;
int main()
{
	addnode(10);
	addnode(20);
	addnode(30);
	addnode(40);
	addnodehead(60);
	addnode(50);
	//addnodehead(60);
	display();
}
int addnode(int x)
{
struct node *ptr,*ptrav;	
ptrav=malloc(sizeof(struct node));
ptrav->data=x;
ptrav->link=NULL;
if (phead==NULL)
{
	phead=ptrav;
	return 0;
}
else 
{
ptr=phead;
while(ptr->link!=NULL)
{
	ptr=ptr->link;
}

	ptr->link=ptrav;
}
}
void addnodehead(int x)
{
	struct node *ptr;
	ptr=malloc(sizeof(struct node));
	ptr->data=x;
	ptr->link=NULL;
        ptr->link=phead;
	phead=ptr;
}
void display()
{
	struct node *ptrav;
	ptrav=phead;
	while(ptrav!=NULL)
	{
		printf("%d->",ptrav->data);
		ptrav=ptrav->link;
	}
	printf("NULL");

}






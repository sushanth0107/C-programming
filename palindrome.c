#include<stdio.h>
#include<stdlib.h>
struct node
{
        int data;
        struct node *link;
};
void addnode(int x);
void display();
void middle();
struct node *phead;
struct node *reverse(struct node *head);
int main()
{
        addnode(10);
        addnode(20);
        addnode(30);
        addnode(20);
        addnode(10);
        display();
	middle();
	display();
}
void addnode(int x)
{
struct node *ptr,*ptrav;
ptr=malloc(sizeof(struct node));
ptr->data=x;
ptr->link=NULL;
if(phead==NULL)
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
        ptrav->link=ptr;
}
}
void middle()
{
	struct node *fast=phead,*slow=phead;
	while(fast!=NULL && fast->link!=NULL)
	{
		slow=slow->link;
		fast=fast->link->link;
	}
	struct node *secondhalf=reverse(slow);
	struct node *firsthalf=phead;
	struct node *temp=secondhalf;
	reverse(secondhalf);
}
struct node *reverse(struct node *head)
{
	struct node *prev=NULL,*curr=head,*next=NULL;
	while(curr!=NULL)
	{
		next=curr->link;
		curr->link=prev;
		prev=curr;
		curr=next;
	}
	return prev;
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

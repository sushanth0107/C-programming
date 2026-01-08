#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
struct node *phead;
void add(int x);
void display();
struct node  *reverse(struct node *head);
int palindrome();
int main()
{
	int val,choice;
	while(1)
	{
		printf("1.add node\n");
		printf("2.display\n");
		printf("3.find\n");
		printf("4.exit\n");
		printf("enter choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter value\n");
				scanf("%d",&val);
				add(val);
				break;
			case 2:
				display();
				break;
			case 3:
				if(palindrome())
				{
					printf("palindrome");
				}
				else
				{
					printf("not");
				}
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("inavlid");
		}
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
struct node  *reverse(struct node *head)
{
	struct node *curr=head,*next=NULL,*prev=NULL;
	while(curr!=NULL)
	{
		next=curr->link;
		curr->link=prev;
		prev=curr;
curr=next;
	}
	return prev;
}
int palindrome()
{
	struct node *ptr=phead,*slow=phead,*fast=phead;
	while(fast!=NULL && fast->link && fast->link->link)
	{
		slow=slow->link;
		fast=fast->link->link;
	}
	struct node *temp=reverse(slow);
	struct node *first=phead;
	struct node *second=temp;
	int pali=1;
	while(temp!=NULL)
	{
		if(fast->data!=temp->data)
		{
			pali=0;
			break;
		}
		fast=fast->link;
		temp=temp->link;
	}
	reverse(second);
	return pali;
}
void display()
{
	struct node *ptr=phead;
	while(ptr!=NULL)
	{
		printf("%d->",ptr->data);
		ptr=ptr->link;
	}
	printf("NULL");

}

#include<stdio.h>
#include<stdlib.h>
struct node
{
        int data;
        struct node *link;
};
struct node *phead;
void add(int x);
void duplicate();
void display();
int main()
{
        add(10);
        add(20);
        add(30);
	add(20);
        add(40);
        add(25);
        add(50);
        display();
        duplicate();
        display();
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
        printf("NULL");
}
void duplicate()
{
	struct node *curr=phead,*prev,*temp;
	while(curr!=NULL)
	{
		prev=curr;
		temp=curr->link;
		while(temp!=NULL)
		{
			if(curr->data==temp->data)
			{
				prev->link=temp->link;
				free(temp);
				temp=prev->link;
			}
			else
			{
				prev=temp;
				temp=temp->link;
			}
		}
	
		curr=curr->link;
	}
}


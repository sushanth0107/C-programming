#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *link;
};
void addnode(int x);
void display();
void deletenode();
void top();
struct node *phead;
int main()
{
	addnode(10);
	addnode(20);
	addnode(30);
	addnode(40);
	addnode(50);
	display();
	deletenode();
	display();
	top();
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
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node *phead;
void add(int x);
void display();
int main()
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&n);
        add
        
    }
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
    
}		}
		ptrav->link=ptr;
	}
}
void deletenode()
{
	struct node *prev,*ptrav;
	ptrav=phead;
	while(ptrav->link!=NULL)
	{
		prev=ptrav;
		ptrav=ptrav->link;
	}
	prev->link=ptrav->link;
	free(ptrav);
}
void top()
{
	struct node *ptr,*ptrav;
		ptrav=phead;
	        phead=ptrav->link;
		free(ptrav);

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
	printf("null");
}



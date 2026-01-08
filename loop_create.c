#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *link;
};
struct node *phead;
void add(int x);
void display();
void loop();
int detectloop();
int main()
{
	add(10);
	add(20);
	add(30);
	add(40);
	add(50);
	display();
	loop();
	display();
       detectloop();


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
void loop()
{
	struct node *ptr,*s;
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
int detectloop() {
    struct node *slow = phead, *fast = phead;
    while (slow && fast && fast->link) {
        slow = slow->link;             // move one step
        fast = fast->link->link;       // move two steps
        if (slow == fast) {
            printf("loop is found");

        }
    }
}




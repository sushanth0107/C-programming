#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
};
struct node *phead;
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
    struct node *ptr=phead;
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->link;
    }
}
void duplicates()
{
    struct node *prev,*curr=phead,*run=NULL;
    while(curr!=NULL)
    {
        run=curr->link;
        prev=curr;
        while(run!=NULL)
        {
            if(curr->data==run->data)
            {
                prev->link=run->link;
                free(run);
                run=prev->link;
            }
            else
            {
                prev=prev->link;
                run=run->link;
            }
        }
        curr=curr->link;
    }
}

int main()
{
    while(1)
    {
        int val,num;
        printf("\n1.add\n");
        printf("2.display\n");
        printf("3.duplicates\n");
	printf("4.for exit\n");
	printf("enter the case\n");
        scanf("%d",&num);
        switch(num)
        {
            case 1:printf("wnter the value");
		    scanf("%d",&val);
                    add(val);
                    break;
            case 2:display();
                break;
            case 3:duplicates();
                  break;
            case 4:printf("exited from loop");
		   exit(0);
                   break;
        }
    }
}

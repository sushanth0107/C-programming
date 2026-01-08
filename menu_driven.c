#include<stdio.h>
#include<stdlib.h>
struct node
{
        int data;
        struct node *link;
};
struct node *phead=NULL;
void insert(int x)
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
void addnode(int n)
{
        struct node *ptr=malloc(sizeof(struct node));
        ptr->data=n;
        ptr->link=NULL;
        ptr->link=phead;
        phead=ptr;
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
int main()
{
        int n;
        int num;
//      scanf("%d",&num);
        while(1)
        {
        printf("   menui\n");
        printf("1. insert node\n ");
        printf("2. display \n");
        printf("3. addnode node head\n");
        printf("4. exit");
        scanf("%d",&num);
        switch(num)
        {
               case 1:
                       printf("enter value to insert");
                       scanf("%d",&n);
                       insert(n);
                       break;
               case 2:
                       display();
                       break;
              case 3:
                       int a;
                       printf("enter a value\n");
                       scanf("%d",&a);
                       addnode(a);
                       break;

               case 4:
                       exit(0);

        }




}
}

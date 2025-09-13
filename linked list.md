## 1. create a loop with the linked list and found loop is created or not?
---
```c
#include<stdio.h>
#include<stdlib.h>
struct node {
        int data;
        struct node *link;
};
struct node *phead;
void add(int x);
void display(int n);
void loop();
int loopdetect();
int main()
{
        add(10);
        add(20);
        add(30);
        add(40);
        add(50);
        display(6);
        loop();
        display(15);
        if(loopdetect())
        {
                printf("loop is found");
        }
        else
        {
                printf("loop is not found");
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
void display(int n)
{
        struct node *ptr;
        ptr=phead;
        int count=0;
        while(ptr!=NULL&&count<n)
        {
                printf("%d->",ptr->data);
                ptr=ptr->link;
                count++;
        }
}
void loop()
{
        struct node *ptr,*s=NULL;
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
int loopdetect()
{
        struct node *slow=phead,*fast=phead;
        struct node *ptr=phead;
        while(ptr!=NULL)
        {
                slow=slow->link;
                fast=fast->link->link;
        if(slow==fast)
        {
                return 1;
        }
        }
        return 0;
  } 
  ```
## 2 nth node from last
---
```c
#include<stdio.h>
#include<stdlib.h>
struct node {
        int data;
        struct node *link;
};
struct node *phead;
void add(int x);
void display();
void nth();
int main()
{
        add(10);
        add(20);
        add(30);
        add(40);
        add(50);
        display();
        nth();
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
void nth()
{
        struct node *ptr;
        ptr=phead;
        int count=0;
        int pos;
        scanf("%d",&pos);
        while(ptr!=NULL)
        {
                count++;
                ptr=ptr->link;

        }
        ptr=phead;
        int nth=count-pos;
        for(int i=0;i<nth;i++)
        {
                ptr=ptr->link;
        }
        printf("pos%d  value%d",pos,ptr->data);
}
```
## 3.reverse a linked list
---
```c
#include<stdio.h>
#include<stdlib.h>
struct node
{
        int data;
        struct node *link;
};
void addnode(int x);
void reversenode();
void display();
struct node *phead;
int main()
{
        addnode(10);
        addnode(20);
        addnode(30);
        addnode(40);
        addnode(50);
        display();
        reversenode();
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
void reversenode()
{
        //struct node(struct node *head)
        struct node *prev=NULL,*curr=phead,*next=NULL;
        while(curr!=NULL)
        {
                next=curr->link;
                curr->link=prev;
                prev=curr;
                curr=next;
        }
        phead=prev;
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
```
## 4.insert a node at the middle of the linked list
---
```c
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
struct node *phead;
int main()
{
        addnode(10);
        addnode(20);
        addnode(30);
        addnode(40);
        addnode(50);
        addnode(60);
        display();
        insert(35);
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
        while(fast!=NULL && fast->link!=NULL)
        {
                slow=slow->link;
                prev=slow->link;
                fast=fast->link->link;
        }
        ptr->link=prev;
        slow->link=ptr;
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
```




#include<stdio.h>
#include<stdlib.h>
struct node
{
        int data;
        struct node *next;
};
struct node *head;
void insert(int x)
{
        struct node *new,*trav;
        new=malloc(sizeof(struct node));
        if(new==NULL)
        {
                printf("malloc error\n");
                return;
        }
        new->data=x;
        new->next=NULL;
        if(head==NULL)
        {
                head=new;
                return;
        }
        else
        {
                trav=head;
                while(trav->next!=NULL)
                {
                        trav=trav->next;
                }
                trav->next=new;
        }
}
void display()
{
        struct node *trav=head;
        while(trav!=NULL)
        {
                printf("%d->",trav->data);
                trav=trav->next;
        }
        printf("NULL\n");
}
void palindrome()
{
        int arr[100],i=0;
        struct node *trav=head;
        while(trav!=NULL)
        {
                arr[i++]=trav->data;
                trav=trav->next;
        }
        int left=0,right=i-1;
        while(left<right)
        {
                if(arr[left]!=arr[right])
                {
                        printf("not palindrome\n");
                        return;
                }
                left++;
                right--;
        }
        printf("palindrome\n");
}
int main()
{
        insert(11);
        insert(12);
        insert(13);
        insert(13);
        insert(12);
        insert(11);
        display();
        palindrome();
        display();
}

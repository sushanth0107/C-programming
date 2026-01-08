#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};
struct node *phead = NULL;

void add(int x);
void display(int n);   // print limited nodes
void loop();
int detectLoop();

int main() {
    add(10);
    add(20);
    add(30);
    add(40);
    add(50);

    printf("Original list:\n");
    display(10);

    loop();  // create loop at given position

    printf("\nList after loop creation (limited display):\n");
    display(15);   // print only 15 nodes to avoid infinite printing

    if (detectLoop())
        printf("\nLoop is found\n");
    else
        printf("\nNo loop\n");

    return 0;
}

void add(int x) {
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = x;
    ptr->link = NULL;

    if (phead == NULL) {
        phead = ptr;
    } else {
        struct node *ptrav = phead;
        while (ptrav->link != NULL) {
            ptrav = ptrav->link;
        }
        ptrav->link = ptr;
    }
}

// Display only n nodes (to avoid infinite loop printing)
void display(int n) {
    struct node *ptr = phead;
    int count = 0;
    while (ptr != NULL && count < n) {
        printf("%d->", ptr->data);
        ptr = ptr->link;
        count++;
    }
    printf("...\n");
}

// Create a loop by connecting last node to given position
void loop() {
    struct node *ptr = phead, *s = NULL;
    int pos;
    printf("\nEnter position to create loop: ");
    scanf("%d", &pos);

    int count = 1;
    while (ptr != NULL) {
        if (count == pos) {
            s = ptr;
        }
        }
        ptr = ptr->link;
        count++;
    }
}

// Detect loop using Floyd’s cycle algorithm
int detectLoop() {
    struct node *slow = phead, *fast = phead;
    while (slow && fast && fast->link) {
        slow = slow->link;             // move one step
        fast = fast->link->link;       // move two steps
        if (slow == fast) {
            return 1;  // loop found
        }
    }
    return 0;  // no loop
}


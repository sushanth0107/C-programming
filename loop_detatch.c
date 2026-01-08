#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};
struct node *phead = NULL;

void add(int x);
void display();
void loop();
void detectAndRemoveLoop();

int main() {
    add(10);
    add(20);
    add(30);
    add(40);
    add(50);

    printf("Original list:\n");
    display();

    printf("\nEnter position to create loop: ");
    loop();

    detectAndRemoveLoop();  // detect and break loop

    printf("\nAfter loop removal:\n");
    display();
}

void add(int x) {
    struct node *ptr, *ptrav;
    ptr = malloc(sizeof(struct node));
    ptr->data = x;
    ptr->link = NULL;

    if (phead == NULL) {
        phead = ptr;
    } else {
        ptrav = phead;
        while (ptrav->link != NULL) {
            ptrav = ptrav->link;
        }
        ptrav->link = ptr;
    }
}

void display() {
    struct node *ptr = phead;
    while (ptr != NULL) {
        printf("%d->", ptr->data);
        ptr = ptr->link;
    }
    printf("NULL\n");
}

void loop() {
    struct node *ptr = phead, *s = NULL;
    int pos, count = 1;
    scanf("%d", &pos);

    while (ptr != NULL) {
        if (count == pos) {
            s = ptr;  // store loop node
        }
        if (ptr->link == NULL) {
            if (s != NULL) {
                ptr->link = s;
                printf("Loop created at node %d\n", s->data);
            }
            break;
        }
        ptr = ptr->link;
        count++;
    }
}

void detectAndRemoveLoop() {
    struct node *slow = phead, *fast = phead;

    while (slow && fast && fast->link) {
        slow = slow->link;
        fast = fast->link->link;

        if (slow == fast) {   // loop detected
            printf("Loop detected!\n");

            // reset slow to head
            slow = phead;

            // find node before loop start
            while (slow->link != fast->link) {
                slow = slow->link;
                fast = fast->link;
            }

            // now fast->link (or slow->link) is loop start
            fast->link = NULL;
            printf("Loop removed!\n");
            return;
        }
    }
    printf("No loop detected.\n");
}


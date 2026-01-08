#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
    int info;
    struct node *link;
};

void addnode(int x);
bool isPalindrome();
struct node* reverse(struct node* head);
void display();

struct node *phead = NULL;

int main() {
    // Adding nodes
    addnode(1);
    addnode(2);
    addnode(3);
    addnode(2);
    addnode(1);

    printf("\nLinked List:\n");
    display();

    // Check for palindrome
    if (isPalindrome()) {
        printf("\nThe linked list is a palindrome.\n");
    } else {
        printf("\nThe linked list is NOT a palindrome.\n");
    }

    return 0;
}

void addnode(int x) {
    struct node *ptr, *ptrav;
    ptr = malloc(sizeof(struct node));
    ptr->info = x;
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

bool isPalindrome() {
    if (phead == NULL || phead->link == NULL) {
        return true;  // Empty or single-node list is a palindrome
    }

    struct node *slow = phead, *fast = phead;
    struct node *firstHalfEnd = NULL;

    // Step 1: Find the middle of the list
    while (fast != NULL && fast->link != NULL) {
        slow = slow->link;
        fast = fast->link->link;
    }

    // Step 2: Reverse the second half of the list
    struct node *secondHalf = reverse(slow);

    // Step 3: Compare the two halves
    struct node *firstHalf = phead;
    struct node *temp = secondHalf;
    bool isPalin = true;

    while (temp != NULL) {
        if (firstHalf->info != temp->info) {
            isPalin = false;
            break;
        }
        firstHalf = firstHalf->link;
        temp = temp->link;
    }

    // Step 4: Restore the original list (reverse the second half back)
    reverse(secondHalf);

    return isPalin;
}

struct node* reverse(struct node* head) {
    struct node *prev = NULL, *curr = head, *next = NULL;

    while (curr != NULL) {
        next = curr->link;
        curr->link = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

void display() {
    struct node *ptr = phead;

    if (ptr == NULL) {
        printf("List is empty.\n");
        return;
    }

    while (ptr != NULL) {
        printf("%d -> ", ptr->info);
        ptr = ptr->link;
    }
    printf("NULL\n");
}


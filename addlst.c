#include <malloc.h>
#include <stdio.h>

struct Node {
    int data;
    struct Node *next;
};

void traverse(struct Node *root) {
    while (root) {
        printf("%d \n", root->data);
        root = root->next;
    }
}

void addAtLast(struct Node *root, int data) {
    struct Node *temp = root, *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

int main() {
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = 98;
    temp->next = NULL;
    int t=3;
    printf("Enter The Element :- \n");
    while (t--) {
        int data;
        scanf("%d", &data);
        addAtLast(temp, data);
    }

    traverse(temp);
}
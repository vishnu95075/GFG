#include <iostream>
using namespace std;
class Node {
   public:
    int data;
    Node *next;
    Node(int d) {
        data = d;
        next = NULL;
    }
};

void traverseLinklist(Node *root) {
    while (root) {
        cout << root->data << " ";
        root = root->next;
    }
}

void addAtFirst(Node **root, int d) {
    Node *t = new Node(d);
    t->next = *root;
    *root = t;
}

void addAtLast(Node *root, int data) {
    if (root == NULL) {
        root = new Node(data);
        return;
    }
    Node *temp = root;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new Node(data);
}

Node *reverse(Node *head) {
    Node *n1 = head;
    Node *n2 = new Node(head->data);

    n2->next = NULL;
    while (n1->next != NULL) {
        n1 = n1->next;
        Node *temp = new Node(n1->data);
        temp->next = n2;
        n2 = temp;
    }
    return n2;
}

struct Node *reverseList(struct Node *head) {
    struct Node *prev, *current, *forward;
    prev = NULL;
    current = head;
    forward = NULL;

    while (current != NULL) {
        forward = current->next;
        current->next = prev;
        prev = current;
        current = forward;
    }
    head = prev;
    return head;
}

void rv(Node *root){
    Node *forw=NULL,*curr=root,*prev=NULL;
    while(curr!=NULL){
        forw = curr->next;
        curr = prev->next;

    }
}

int main() {
    struct Node *head = new Node(0);
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        addAtLast(head, data);
    }
    traverseLinklist(head);
    head = reverse(head);
    cout << "After \n";
    traverseLinklist(head);

    return 0;
}
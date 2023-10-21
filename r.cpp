#include <iostream>
using namespace std;

class Node {
   public:
    int data;
    Node *next;
    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

void traverse(Node *root) {
    while (root) {
        cout << (root->data) << " ";
        root = root->next;
    }
}
void addAtLast(Node *root, int data) {
    while (root->next != NULL) {
        root = root->next;
    }
    root->next = new Node(data);
}

Node *reverse(Node *root) {
    Node *curr = root, *forw = NULL, *prev = NULL;
    while (curr) {
        forw = curr->next;
        curr->next = prev;
        prev= curr;
        curr=forw;
    }
    root=prev;
    return root;
}

//   1->2->3->4

int main() {
    Node *head = new Node(0);
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        addAtLast(head, data);
    }
    traverse(head);
    cout<<"\nAfter Reverse the Linklist \n";
    head=reverse(head);
    traverse(head);
    return 0;
}
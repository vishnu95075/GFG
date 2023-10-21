#include <iostream>
#include <unordered_set>
using namespace std;

class Node {
   public:
    int data;
    Node *next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void travese(Node *root) {
    while (root) {
        cout << root->data << " ";
        root = root->next;
    }
}

void addAtFirst(Node **root, int data) {
    Node *newNode = new Node(data);
    newNode->next = *root;
    *root = newNode;
}

Node *deleteDuplicate(Node *root) {
    unordered_set<int> s;
    Node *r = root;
    Node *prev;
    while (root) {
        if (s.find(root->data) != s.end()) {
            prev->next = root->next;
            root = root->next;

        } else {
            s.insert(root->data);
            prev = root;
            root = root->next;
        }
    }
    return r;
}

int main() {
    Node *head = new Node(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        addAtFirst(&head, t);
    }

    travese(head);
    cout << endl;
    head = deleteDuplicate(head);
    travese(head);
    return 0;
}

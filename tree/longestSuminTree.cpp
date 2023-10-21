#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};

void printInorder(Node *node) {
    if (node == NULL) {
        return;
    }
    printInorder(node->left);
    cout << node->data << " ";
    printInorder(node->right);
}

Node *buildTree(string str) {
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

  
    Node *root = new Node(stoi(ip[0]));


    queue<Node *> queue;
    queue.push(root);

    int i = 1;
    while (!queue.empty() && i < ip.size()) {
    
        Node *currNode = queue.front();
        queue.pop();

      
        string currVal = ip[i];

     
        if (currVal != "N") {
           
            currNode->left = new Node(stoi(currVal));

            queue.push(currNode->left);
        }

        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        if (currVal != "N") {
           
            currNode->right = new Node(stoi(currVal));
            
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

class Solution {
   public:
   public:
    void solve(Node *root, int sum, int &maxsum, int len, int &maxlen) {
        if (root == NULL) {
            if (len > maxlen) {
                maxlen = len;
                maxsum = sum;
            } else if (len == maxlen) {
                maxsum = max(sum, maxsum);
            }
            return;
        }
        sum += root->data;
        solve(root->left, sum, maxsum, len + 1, maxlen);
        solve(root->right, sum, maxsum, len + 1, maxlen);
    }
    int sumOfLongRootToLeafPath(Node *root) {
        // code here
        int len, maxlen, sum, maxsum;
        len = maxlen = sum = 0;
        maxsum = INT_MIN;
        solve(root, sum, maxsum, len, maxlen);
        return maxsum;
    }
};

int main() {
    int t = 1;
    // scanf("%d", &t);
    cin.ignore();
    while (t--) {
        string treeString;
        getline(cin, treeString);
        Node *root = buildTree(treeString);
        Solution obj;
        int res = obj.sumOfLongRootToLeafPath(root);
        cout << res << "\n";

        printInorder(root);
    }
    return 0;
}
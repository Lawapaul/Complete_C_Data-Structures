#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node {
public:
    Node* left;
    Node* right;
    int val;
    Node(int data) {
        left = NULL;
        val = data;
        right = NULL;
    }
};

static int idx = -1;
Node* createTree(vector<int>& array) {
    idx++;
    if (array[idx] == -1) {
        return NULL;
    }
    Node* current = new Node(array[idx]);
    current->left = createTree(array);
    current->right = createTree(array);
    return current;
}

void kthLevel(Node* root, int k) {
    if (root == NULL) {
        cout << "Tree is empty" << endl;
        return;
    }

    queue<Node*> Q;
    int count = 1;
    bool found = false;

    Q.push(root);
    Q.push(NULL);

    while (!Q.empty()) {
        Node* current = Q.front();
        Q.pop();

        if (current == NULL) {
            if (Q.empty()) {
                break;
            }
            Q.push(NULL);
            count++;
        } else {
            if (count == k) {
                cout << current->val << " ";
                found = true;
            }
            if (current->left != NULL) {
                Q.push(current->left);
            }
            if (current->right != NULL) {
                Q.push(current->right);
            }
        }
    }
    if (!found) {
        cout << "Level out of Range";
    }
    cout << endl;
}

int main() {
    vector<int> array;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++) {
        int data;
        cin >> data;
        array.push_back(data);
    }
    Node* root = createTree(array);
    int k;
    cin >> k;
    kthLevel(root, k);
}
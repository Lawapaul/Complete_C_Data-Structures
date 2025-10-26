#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    Node* left;
    Node* right;
    int data;
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int idx = -1;
Node* buildTree(vector<int>& nodes) {
    idx++;
    if (nodes[idx] == -1) {
        return NULL;
    }
    Node* current = new Node(nodes[idx]);
    current->left = buildTree(nodes);
    current->right = buildTree(nodes);
    return current;
}

bool PATH(Node* root, vector<int>& path, int element, int k) {
    if (root == NULL) {
        return false;
    }
    path.push_back(root->data);
    if (root->data == element) {
        return true;
    }
    if (PATH(root->left, path, element, k) || PATH(root->right, path, element, k)) {
        return true;
    }
    path.pop_back();
    return false;
}

int main() {
    vector<int> nodes;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++) {
        int data;
        cin >> data;
        nodes.push_back(data);
    }
    idx = -1;
    Node* head = buildTree(nodes);
    int k, element;
    cin >> k >> element;
    vector<int> path;
    if (PATH(head, path, element, k)) {
        if (path.size() <= k) {
            cout << "Out of range";
        } else {
            cout << path[path.size() - k - 1];
        }
    } else {
        cout << "Node not found";
    }
    return 0;
}
#include <iostream>
#include <map>
#include <vector>
#include <queue>
using namespace std;

class Node {
public:
    Node* left;
    int val;
    Node* right;
    Node(int data) {
        val = data;
        left = NULL;
        right = NULL;
    }
};

static int idx = -1;
Node* create(vector<int> arr) {
    idx++;
    if (arr[idx] == -1) {
        return NULL;
    }
    Node* current = new Node(arr[idx]);
    current->left = create(arr);
    current->right = create(arr);
    return current;
}
void topView(Node* root) {
    queue<pair<Node*, int>> Q; 
    pair<Node*, int> initial = make_pair(root, 0);
    map<int, int> m;
    Q.push(initial);
    while (!Q.empty()) {
        pair<Node*, int> current = Q.front();
        Q.pop();
        if (m.count(current.second) == 0) {
            m[current.second] = current.first->val;
        }
        if (current.first->left != NULL) {
            pair<Node*, int> left = make_pair(current.first->left, current.second - 1);
            Q.push(left);
        }
        if (current.first->right != NULL) {
            pair<Node*, int> right = make_pair(current.first->right, current.second + 1);
            Q.push(right);
        }
    }
    for (auto x : m) {
        cout << x.second << " ";
    }
    cout << endl;
}

int main() {
    int size;
    vector<int> arr;
    cin >> size;
    for (int i = 0; i < size; i++) {
        int element;
        cin >> element;
        arr.push_back(element);
    }
    Node* root = create(arr);
    cout << "Top View: ";
    topView(root);
    return 0;
}
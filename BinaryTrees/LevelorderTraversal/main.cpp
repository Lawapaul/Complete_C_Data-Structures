#include <iostream>
#include <queue>
using namespace std;

class Node{
    public:
        Node* left;
        Node* right;
        int data;
        Node(int val){
            data=val;
            left=NULL;
            right=NULL;
        }
};

static int idx=-1;
Node* buildTree(vector <int> nodes){
    idx++;
    if(nodes[idx]==-1){
        return NULL;
    }
    Node* current=new Node(nodes[idx]);
    current->left=buildTree(nodes);
    current->right=buildTree(nodes);
    return current;
}
void levelorder(Node* current){
    queue<Node*> Q;
    Q.push(current);
    while(!Q.empty()){
        Node* temp = Q.front();
        Q.pop();
        cout << temp->data << " ";
        if(temp->left!=NULL){
            Q.push(temp->left);
        }
        if(temp->right!=NULL){
            Q.push(temp->right);
        }
    }
}
int main(){
    vector <int> nodes;
    int size;
    cin >> size;
    for(int i=0;i<size;i++){
        int data;
        cin >> data;
        nodes.push_back(data);
    }
    Node* head=buildTree(nodes);
    levelorder(head);
    return 0;
}
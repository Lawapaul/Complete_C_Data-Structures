#include <iostream>
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
void inorder(Node* current){
    if(current==NULL){
        return;
    }
    inorder(current->left);
    cout << current->data << " ";
    inorder(current->right);
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
    inorder(head);
    return 0;
}
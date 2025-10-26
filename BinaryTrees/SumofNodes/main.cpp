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
int sum(Node* head){
    if(head==NULL){
        return 0;
    }
    int left=sum(head->left);
    int right=sum(head->right);
    return left + right + head->data;
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
    cout << sum(head);
    return 0;
}
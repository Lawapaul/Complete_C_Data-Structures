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
Node* LCA (Node* root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1 || root->data==n2){
        return root;
    }
    Node* left=LCA(root->left,n1,n2);
    Node* right=LCA(root->right,n1,n2);
    if(left!=NULL && right!=NULL){
        return root;
    }
    return (left==NULL) ? right : left;
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
    Node* head = buildTree(nodes);
    int n1, n2;
    cin >> n1 >> n2;
    Node* lca = LCA(head, n1,n2);
    cout << lca->data;
    return 0;
}
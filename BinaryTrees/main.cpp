#include <iostream>
#include <queue>
#include <map>
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
bool check(Node* root,Node* rootS){
    if(root==NULL && rootS==NULL){
        return true;
    }
    if(root==NULL || rootS==NULL){
        return false;
    }
    if(root->data!=rootS->data){
        return false;
    }
    return check(root->left,rootS->left) && check(root->right,rootS->right);
}
bool isSubtree(Node* root,Node* rootS){
    if(root==NULL && rootS==NULL){
        return true;
    }
    if(root==NULL || rootS==NULL){
        return false;
    }
    if(root->data == rootS->data){
        if (check(root,rootS)){
            return true;
        }
    }
    bool left=isSubtree(root->left,rootS->left);
    if(!left){
        return isSubtree(root->right,rootS->right);
    }
    return false;
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
    vector <int> result;
    for(int i=0;i<result.size();i++){
        cout << result[i] << " ";
    }
    return 0;
}
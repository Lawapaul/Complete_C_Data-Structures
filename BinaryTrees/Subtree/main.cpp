#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
        Node* left;
        int val;
        Node* right;
        Node(int data){
            val=data;
            left=NULL;
            right=NULL;
        }
};
static int idx=-1;
Node* create(vector <int> arr){
    idx++;
    if(arr[idx]==-1){
        return NULL;
    }
    Node* current = new Node(arr[idx]);
    current->left=create(arr);
    current->right=create(arr);
    return current;
}
bool isIdentical(Node* root,Node* subroot){
    if(root==NULL && subroot==NULL){
        return true;
    } else if(root==NULL || subroot==NULL){
        return false;
    }
    if(root->val != subroot->val){
        return false;
    }
    return isIdentical(root->left,subroot->left) || isIdentical(root->left,subroot->left);
}
bool isSubtree(Node* root,Node* subroot){
    if(root==NULL && subroot==NULL){
        return true;
    } else if(root==NULL || subroot==NULL){
        return false;
    }
    if(root->val==subroot->val){
        if(isIdentical(root,subroot)){
            return true;
        }
    }
    bool left=isSubtree(root->left,subroot);
    if(!left){
        return isSubtree(root->right,subroot);
    }
    return true;
}
int main(){
    int size;
    vector <int> arr;
    cin >> size;
    for(int i=0;i<size;i++){
        int element;
        cin >> element;
        arr.push_back(element);
    }
    Node* root = create(arr);
    Node* subtree = new Node(2);
    subtree->left=new Node(4);
    subtree->right=new Node(5);
    cout << (isSubtree(root, subtree) ? "Yes" : "No");
    return 0;
}
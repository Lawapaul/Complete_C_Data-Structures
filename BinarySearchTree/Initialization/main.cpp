#include <iostream>
using namespace std;

class Node{
    public:
        Node* left;
        int val;
        Node* right;
        Node(int data){
            left=right=NULL;
            val=data;
        }
};
Node* insert(Node* root,int val){
    if(root==NULL){
        root=new Node(val);
        return root;
    }
    if(root->val > val){
        root->left=insert(root->left,val);
    }
    else{
        root->right=insert(root->right,val);
    }
    return root;
}
Node* createBST(vector<int> array){
    Node* root=NULL;
    for(int i=0;i<array.size();i++){
        root = insert(root,array[i]);
    }
    return root;
}
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}
int main(){
    vector<int> array;
    int size;
    cin >> size;
    for(int i=0;i<size;i++){
        int data;
        cin >> data;
        array.push_back(data);
    }
    Node* root=createBST(array);
    inorder(root);
    return 0;

}
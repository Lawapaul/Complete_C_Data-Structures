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
int height(Node* root){
    if(root==NULL){
        return 0;
    }
    int left=height(root->left);
    int right=height(root->right);
    return max(left,right)+1;
}
int diameter(Node* root){
    if(root==NULL){
        return 0;
    }
    int current = height(root->left) + height(root->right) + 1;
    int left=diameter(root->left);
    int right = diameter(root->right);
    return max(current,max(left,right));
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
    int diameterC = diameter(root);
    cout << "Diameter: " << diameterC;
    return 0;
}
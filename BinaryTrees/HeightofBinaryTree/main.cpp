#include <iostream>
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
    int treeHeight = height(root);
    cout << "Height: " << treeHeight << endl;
    return 0;
}
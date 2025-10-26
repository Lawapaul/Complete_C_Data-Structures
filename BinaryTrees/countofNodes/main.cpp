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
int Sum(Node* root){
    if(root==NULL){
        return 0;
    }
    int left=Sum(root->left);
    int right=Sum(root->right);
    return left + right+1;
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
    int count = Sum(root);
    cout << "Number of nodes: " << count << endl;
    return 0;
}
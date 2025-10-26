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
pair<int,int> diameter(Node* root){
    if(root==NULL){
        return make_pair(0,0);
    }
    pair <int,int> left=diameter(root->left);
    pair <int,int> right=diameter(root->right);
    int current = left.second + right.second +1;
    int finalHeight = max(left.second,right.second)+1;
    int finalResult = max(current,max(left.first,right.first));
    return make_pair(finalResult,finalHeight);
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
    int diameterC = diameter(root).first;
    cout << "Diameter: " << diameterC;
    return 0;
}
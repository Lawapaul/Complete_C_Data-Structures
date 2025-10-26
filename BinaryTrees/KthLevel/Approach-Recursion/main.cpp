#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
        Node* left;
        int val;
        Node* right;
        Node(int data){
            left=NULL;
            val=data;
            right=NULL;
        }
};

static int idx=-1;
Node* createTree(vector <int> array){
    idx++;
    if(array[idx]==-1){
        return NULL;
    }
    Node* current=new Node(array[idx]);
    current->left=createTree(array);
    current->right=createTree(array);
    return current;
}
void kthLevel(Node* root,int k,int current){
    if(root==NULL){
        return;
    }
    if(current==k){
        cout << root->val << " ";
        return;
    }
    kthLevel(root->left,k,current+1);
    kthLevel(root->right,k,current+1);
}
int main(){
    vector <int> array;
    int size;
    cin >> size;
    for(int i=0;i<size;i++){
        int data;
        cin >> data;
        array.push_back(data);
    }
    Node* root=createTree(array);
    int k;
    cin >> k;
    kthLevel(root,k,1);
    idx=-1;

}
#include <bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val = val;
        left = right = NULL;
    }
};

TreeNode* buildTree(vector<int>&arr,int idx){
    if(idx>=arr.size() || arr[idx]==-1) return NULL;
    TreeNode* newNode = new TreeNode(arr[idx]);
    newNode->left = buildTree(arr,2*idx+1);
    newNode->right = buildTree(arr,2*idx+2);
    return newNode;

}

void traversal(TreeNode* root){
    if(root==NULL) return;
    vector<int> preorder;
    vector<int> postorder;
    vector<int> inorder;

    stack<pair<TreeNode*,int>> st;
    st.push({root,1});
    while(!st.empty()){
        auto top = st.top();
        st.pop();
        if(top.second==1){
            preorder.push_back(top.first->val);
            top.second++;
            st.push(top);
            if(top.first->left!=NULL) st.push({top.first->left,1});
        }else if(top.second==2){
            inorder.push_back(top.first->val);
            top.second++;
            st.push(top);
            if(top.first->right!=NULL) st.push({top.first->right,1});
        }else{
            postorder.push_back(top.first->val);
        }
    }
    cout << "Preorder: " << endl;
    for(auto& it: preorder) cout << it << " ";
    cout << endl;
    cout << "Inorder: " << endl;
    for(auto& it: inorder) cout << it << " ";
    cout << endl;
    cout << "PostOrder: " << endl;
    for(auto& it: postorder) cout << it << " ";
    cout << endl;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    TreeNode* root = NULL;
    root = buildTree(arr,0);
    traversal(root);

}
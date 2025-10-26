/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool left(TreeNode* root, TreeNode* p,vector <TreeNode*>& first){
        if(root==NULL){
            return false;
        }
        first.push_back(root);
        if(root->val==p->val){
            return true;
        }
        if(left(root->left,p,first) || left(root->right,p,first)){
            return true;
        }
        first.pop_back();
        return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector <TreeNode*> first,second;
        left(root,p,first);
        left(root,q,second);
        int minSize= min(first.size(),second.size());
        TreeNode* last=NULL;
        for(int i=0;i<minSize;i++){
            if(first[i]==second[i]){
                last=first[i];
            }else{
                break;
            }
        }
        return last;
    }
};
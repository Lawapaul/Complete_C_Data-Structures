#include <iostream>
#include <unordered_map>
using namespace std;

class Node{
    public:
    unordered_map<char,Node*> children;
    bool endofWord;
    Node(){
        endofWord=false;
    }
};
class Trie{
    Node* root;
    public:
    Trie(){
        root=new Node();
    }
    void insert(string key){
        Node* temp=root;
        for(int i=0;i<key.length();i++){
            if(temp->children.count(key[i])==0){
                temp->children[key[i]]=new Node();
            }
            temp=temp->children[key[i]];
        }
        temp->endofWord=true;
    }
    int helper(Node* root){
        if(!root) return 0;
        int count=1;
        for(auto& it: root->children){
            count+=helper(it.second);
        }
        return count;
    }
    int countUnique(string key){
        for(int i=0;i<key.size();i++){
            string res = key.substr(i);
            insert(res);
        }
        return helper(root);
    }
};
int main(){
Trie t;
    string s;
    cin >> s;
    cout << t.countUnique(s);
}
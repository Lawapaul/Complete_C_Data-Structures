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
    bool search(string key){
        Node* temp=root;
        for(int i=0;i<key.length();i++){
            if(temp->children.count(key[i])==0){
                return false;
            }
            temp=temp->children[key[i]];
        }
        return temp->endofWord;
    }
};
int main(){
Trie t;
    t.insert("apple");
    t.insert("app");
    if(t.search("ape")){
        cout << "Yes";
    }else{
        cout << "No";
    }
}
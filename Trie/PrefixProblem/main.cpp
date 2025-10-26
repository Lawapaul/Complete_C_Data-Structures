#include <iostream>
#include <unordered_map>
using namespace std;

class Node{
    public:
    unordered_map<char,Node*> children;
    bool endofWord;
    int freq;
    Node(){
        freq=0;
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
            temp->children[key[i]]->freq++;
            temp=temp->children[key[i]];
        }
        temp->endofWord=true;
    }
    void prefix(vector<string>& result,string key){
        Node* temp=root;
        string prefix="";
        for(int i=0;i<key.size();i++){
            prefix+=key[i];
            if(temp->children[key[i]]->freq == 1){
                break;
            }
            temp=temp->children[key[i]];
        }
        result.push_back(prefix);
    }
};
int main(){
Trie t;
    vector<string> words = {"zebra","dog","duck","dove"};
    t.insert("zebra");
    t.insert("dog");
    t.insert("duck");
    t.insert("dove");
    vector<string> result;
    for(int i=0;i<4;i++){
        t.prefix(result,words[i]);
    }
    for(int i=0;i<result.size();i++){
        cout << result[i] << " ";
    }
    return 0;
    
}
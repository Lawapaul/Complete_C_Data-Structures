#include <iostream>
using namespace std;

class Node{
    public:
    Node* prev;
    int data;
    Node* next;
    Node(int val){
        prev=NULL;
        data=val;
        next=NULL;
    }
};
class DoublyList{
    public:
    Node* head;
    Node* tail;
    DoublyList(){
        head=NULL;
        tail=NULL;
    }
    void push_front(int val){
        Node* ptr=new Node(val);
        if(head==NULL){
            head=tail=ptr;
        }
        else{
            ptr->next=head;
            head->prev=ptr;
            head=ptr;
        }
    }
    void push_back(int val){
        Node* ptr=new Node(val);
        if(head==NULL){
            head=tail=ptr;
        } else{
            tail->next=ptr;
            ptr->prev=tail;
            tail=ptr;
        }
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout << temp->data << " ";
            temp=temp->next;
        }
    }
};
int main(){
    DoublyList dl;
    dl.push_front(5);
    dl.push_front(4);
    dl.push_back(6);
    dl.push_back(7);
    dl.display();
}
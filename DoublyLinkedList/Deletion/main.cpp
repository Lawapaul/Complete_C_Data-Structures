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
    void pop_front(){
        if(head==NULL){
            return;
        }
        if(head->next==NULL){
            head=NULL;
            return;
        }
        Node* temp=head;
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
    }
    void pop_back() {
    if (head == NULL) {
        return;
    }
    if (head->next == NULL) {
        delete head;
        head = tail = NULL;
        return;
    }
    Node* temp = tail;
    tail = tail->prev;
    tail->next = NULL;
    temp->prev = NULL;
    delete temp;
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
    dl.push_back(1);
    dl.push_back(2);
    dl.push_back(3);
    dl.display();
    dl.pop_back();
    cout << endl;
    dl.display();
}
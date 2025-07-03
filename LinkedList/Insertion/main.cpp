#include <iostream>
using namespace std;

//Linked List Structure
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
    ~Node(){
            if(next!=NULL){
                delete next;
                next=NULL;
            }
    }
};
class List{
    Node* head;
    Node* tail;
    public:
    List(){
        head=NULL;
        tail=NULL;
    }
    void push_front(int val){
        Node* ptr=new Node(val);
        if(head==NULL){
            head=tail=ptr;
        } else{
            ptr->next=head;
            head=ptr;
        }
    }
    void push_end(int val){
        Node* ptr=new Node(val);
        if(head==NULL){
            head=tail=ptr;
        } else{
            tail->next=ptr;
            tail=ptr;
        }
    }
    void push_middle(int index,int value){
        Node* temp=head;
        Node* ptr=new Node(value);
        for(int i=0;i<index-1;i++){
            temp=temp->next;
        }
        if(head==NULL){
            head=tail=ptr;
        }
        else{
            ptr->next=temp->next;
            temp->next=ptr;
        }
        return;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout << temp->data << " ";
            temp=temp->next;
        }
        cout << "NULL";
        return;
    }
    ~List(){
        if(head!=NULL){
            delete head;
            head=NULL;
        }
    }
};

int main(){
    List LL;
    LL.push_front(5);
    LL.push_front(4);
    LL.push_front(3);
    LL.push_end(9);
    LL.push_end(10);
    LL.display();
    LL.push_middle(2,21);
    cout << endl;
    LL.display();
    return 0;
}
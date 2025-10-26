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
    void push_end(int val){
        Node* ptr=new Node(val);
        if(head==NULL){
            head=tail=ptr;
        } else{
            tail->next=ptr;
            tail=ptr;
        }
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
    bool cycle(){
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                return true;
            }
        }
        return false;
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
    LL.push_end(1);
    LL.push_end(2);
    LL.push_end(3);
    LL.push_end(4);
    LL.push_end(5);
    LL.display();
    if(LL.cycle()){
        cout << "Cycle Exists" << endl;
    }else{
        cout << "Cycle Does Not exists" << endl;
    }
    LL.display();
    return 0;
}
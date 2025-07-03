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
    int size(int count,Node* head){
        if(head==NULL){
            return count;
        }
        return size(count+1,head->next);
    }
    void deleteN(int n){
        Node* ptr=head;
        Node* prev=NULL;
        int sizeLL = size(0,head);
        if(n==sizeLL){
            head=head->next;
            return;
        }
        if(n==0 || n>sizeLL){
            return;
        }
        int front = sizeLL - n;
        for(int i=0;i<front;i++){
            prev=ptr;
            ptr=ptr->next;
        }
        cout << ptr->data << endl << prev->data;
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
    LL.push_end(6);
    LL.push_end(7);
    LL.display();
    cout << endl;
    LL.deleteN(7);
    LL.display();
    return 0;
}
#include <iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
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
    void push_back(int val){
        Node* ptr=new Node(val);
        if(head==NULL){
            head=tail=ptr;
        }else{
            tail->next=ptr;
            tail=ptr;
        }
    }
    Node* splitAtMiddle(){
        Node* slow=head;
        Node* fast=head;
        Node* prev=NULL;
        while(fast!=NULL && fast->next!=NULL){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        if(prev!=NULL){
            prev->next=NULL;
        }
        return slow;
    }
    void zigZag(){
        Node* splitRight=splitAtMiddle();
        Node* right=reverse(splitRight);
        Node* left=head;
        while(left!=NULL && right!=NULL){
            Node* nextLeft = left->next;
            Node* nextRight = right->next;
            left->next=right;
            if(nextLeft == NULL){
                break;
            }
            right->next=nextLeft;
            left=nextLeft;
            right=nextRight;
        }
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout << temp->data << " ";
            temp=temp->next;
        }
    }
    
Node* reverse(Node* head){
    Node* current=head;
    Node* prev=NULL;
    Node* next=NULL;
    while(current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
    return head;
}

};
int main(){
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.display();
    ll.zigZag();
    cout << endl;
    ll.display();
}



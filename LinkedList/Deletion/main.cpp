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
        void pop_front(){
            Node* temp=head;
            if(head==NULL){
                return;
            }
            else{
                head=head->next;
                temp->next=NULL;
                delete temp;
            }
        }
        void pop_back(){
            Node* ptr=head;
            Node* prev=NULL;
            if(head==NULL){
                return;
            } else{
                while(ptr->next!=NULL){
                    prev=ptr;
                    ptr=ptr->next;
                }
                prev->next=NULL;
                delete ptr;
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
        ~List(){
            if(head!=NULL){
                delete head;
                head=NULL;
            }
        }
};
int main(){
   List ll;
   ll.push_end(1);
   ll.push_end(2);
   ll.push_end(3);
   ll.push_end(4);
   ll.push_end(5);
   ll.display();
   ll.pop_front();
   ll.pop_front();
   ll.pop_back();
   ll.pop_back();
   cout << endl;
   ll.display();
   return 0;
}
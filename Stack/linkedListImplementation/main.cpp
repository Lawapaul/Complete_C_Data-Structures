#include <iostream>
using namespace std;

template <class T>
class Node{
    public:
        T data;
        Node* next;
        Node(T val){
            data=val;
            next=NULL;
        }
};
template <class T>
class Stack{
    public:
        Node<T>* head;
        Stack(){
            head=NULL;
        }
        void push_front(int val){
            Node<T>* temp=new Node<T>(val);
            if(head==NULL){
                head=temp;
            }else{
                temp->next=head;
                head=temp;
            }
        }
        void pop(){
            Node<T>* temp=head;
            if(head==NULL){
                return;
            }
            else if(head->next==NULL){
                delete head;
                head=NULL;
            } else{
                head=head->next;
                temp->next=NULL;
                delete temp;
            }
        }
        bool isEmpty(){
            if(head==NULL){
                return true;
            }
            return false;
        }
        T top(){
            return head->data;
        }
};
int main(){
    Stack <int>s;
    s.push_front(1);
    s.push_front(2);
    s.push_front(3);
    while(!s.isEmpty()){
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}

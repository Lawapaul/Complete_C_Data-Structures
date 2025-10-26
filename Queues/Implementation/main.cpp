#include <iostream>
using namespace std;

template <class T>
class Node{
    public: 
        T val;
        Node<T>* next;
        Node(T data){
            val=data;
            next=NULL;
        }
};
template <class T>
class Queue{
    public:
        Node<T>* head;
        Node<T>* tail;
        Queue(){
            head=NULL;
            tail=NULL;
        }
        void push(T data){
            Node<T>* temp=new Node<T>(data);
            if(head==NULL){
                head=tail=temp;
            } else{
                tail->next=temp;
                tail=temp;
            }
        }
        void pop(){
            Node<T>* temp=head;
            if(head==NULL){
                cout << "Empty Queue " << endl;
                return;
            }else if(head->next==NULL){
                delete head;
                delete tail;
                head=NULL;
                tail=NULL;
            }else{
                head=head->next;
                temp->next=NULL;
                delete temp;
                temp=NULL;
            }
        }
        T front(){
            return head->val;
        }
        bool isEmpty(){
            return head==NULL;
        }
};
int main(){
    Queue <int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    while(!q.isEmpty()){
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}
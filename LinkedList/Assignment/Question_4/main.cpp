#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
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
    public:
    Node* head;
    Node* tail;
    List(){
        head=NULL;
        tail=NULL;
    }
    void push_back(int data){
        Node* ptr=new Node(data);
        if(head==NULL){
            head=tail=ptr;
        }else{
            tail->next=ptr;
            tail=ptr;
        }
    }
    void evenOdd(){
        Node* evenHead=NULL;
        Node* evenTail=NULL;
        Node* oddHead=NULL;
        Node* oddTail=NULL;
        Node* temp=head;
        while(temp!=NULL){
            Node* current=temp;
            temp=temp->next;
            current->next=NULL;
            if(current->data%2==0){
                if(evenHead==NULL){
                    evenHead=evenTail=current;
                } else{
                    evenTail->next=current;
                    evenTail=current;
                }
                
            } else{
                if(oddHead==NULL){
                    oddHead=oddTail=current;
                } else{
                    oddTail->next=current;
                    oddTail=current;
                }
            }
        }
        if(evenHead==NULL){
            head=oddHead;
            tail=oddTail;
            return;
        } else{
            if(oddHead==NULL){
                head=evenHead;
                tail=evenTail;
                return;
            }else{
                evenTail->next=oddHead;
                head=evenHead;
                tail=oddTail;
                return;
            }
        }
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout << temp->data << " ";
            temp=temp->next;
        }
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
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.display();
    cout << endl;
    ll.evenOdd();
    ll.display();
}
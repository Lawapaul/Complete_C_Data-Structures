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
        void delete_M_N(int m,int n){
            Node* temp=head;
            int count=0;
            while(temp!=NULL){
                if(count==m-1){
                    count=0;
                    Node* del=temp->next;
                    for(int i=0;i<n;i++){
                        if(del==NULL){
                            break;
                        }
                        Node* nextDel = del->next;
                        del->next=NULL;
                        delete del;
                        del=nextDel;
                    }
                    temp->next=del;
                    if(del==NULL){
                        tail=temp;
                    }
                    temp=del;
                } else{
                    temp=temp->next;
                    count++;
                }
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
        List LL;
        LL.push_end(1);
        LL.push_end(2);
        LL.push_end(3);
        LL.push_end(4);
        LL.push_end(5);
        LL.push_end(6);
        LL.push_end(7);
        LL.push_end(8);
        LL.display();
        cout << endl;
        LL.delete_M_N(3,2);
        LL.display();
        return 0;
    }
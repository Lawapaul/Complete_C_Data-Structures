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
        void display(){
            Node* temp=head;
            while(temp!=NULL){
                cout << temp->data << " ";
                temp=temp->next;
            }
            cout << "NULL";
            return;
        }
        void swap(int x,int y){
            Node* X=head;
            Node* Y=head;
            while(X->data != x){
                X=X->next;
            }
            while(Y->data != y){
                Y=Y->next;
            }
            int temp=X->data;
            X->data=Y->data;
            Y->data=temp;
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
        LL.display();
        cout << endl;
        LL.swap(1,6);
        LL.display();
        return 0;
    }
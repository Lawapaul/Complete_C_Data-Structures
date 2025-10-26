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
     public:
    Node* head;
    Node* tail;
    List(){
        head=NULL;
        tail=NULL;
    }
    void push_back(int val){
        Node* ptr = new Node(val);
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
    }
};
 Node* splitAtMiddle(Node* head){
        Node* prev=NULL;
        Node* slow=head;
        Node* fast=head;
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
    Node* merge(Node* left,Node* right){
        List ans;
        Node* i=left;
        Node* j=right;
        while(i!=NULL && j!=NULL){
            if(i->data > j->data){
                ans.push_back(j->data);
                j=j->next;
            }
            else{
                ans.push_back(i->data);
                i=i->next;
            }
        }
        while(i!=NULL){
            ans.push_back(i->data);
            i=i->next;
        }
        while(j!=NULL){
            ans.push_back(j->data);
            j=j->next;
        }
        return ans.head;
    }
    Node* sort(Node* head){
        if(head==NULL || head->next==NULL){
            return head;
        }
        Node* righthead=splitAtMiddle(head);
        Node* left=sort(head);
        Node* right=sort(righthead);
        return merge(left,right);

    }
int main(){
    List LL;
    LL.push_back(5);
    LL.push_back(3);
    LL.push_back(1);
    LL.push_back(2);
    LL.push_back(4);
    LL.display();
    cout << endl;
    LL.head=sort(LL.head);
    LL.display();
    return 0;

}
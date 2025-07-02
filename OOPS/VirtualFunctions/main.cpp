#include <iostream>
using namespace std;


class Parent{
    public:
    virtual void display(){
        cout << "Inside Parent Class" << endl;
    }
};

class Child: public Parent{
    public:
    void display() override{
        cout << "Inside Child Class" << endl;
    }
};
int main(){
    Parent p1;
    p1.display();
    Child c1;
    Parent *p2;
    p2=&c1;
    p2->display();
    return 0;
    
}
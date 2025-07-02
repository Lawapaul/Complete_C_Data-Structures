#include <iostream>
using namespace std;


class Teacher{
    string name;
    public:
    void getName(){
        cout << "Harshit";
    }
};
class Derived_class: public Teacher{
    public:
    void display(){
        cout << "Teacher Name: \n";
    }
};
int main(){
        Derived_class obj1;
        obj1.display();
        obj1.getName();
        return 0;

}
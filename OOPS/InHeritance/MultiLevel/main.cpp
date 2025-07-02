#include <iostream>
using namespace std;


class Teacher{
    public:
    void getName(){
        cout << "Harshit ";
    }
};
class middlename : public Teacher{
    public:
    void display_m(){
        cout << " Singh ";
    }
};
class Surname : public middlename{
    public:
    void display(){
        cout << " Shekhawat";
    }
};
int main(){
        Surname obj1;
        obj1.getName();
        obj1.display_m();
        obj1.display();
        return 0;

}
#include <iostream>
using namespace std;

class Person{
    protected:
    string name;
    string age;
    public:
    Person(string name,int age){
        this->name=name;
        this->age=age;
    }
    

};
class Student: protected Person{
    int stuID;
    public:
    Student(int stuID,string pname,int page):Person(pname,page){
        this->stuID=stuID; 
    }
    void displayStudentInfo(){
        cout << "Student ID: " << this->stuID << endl << "Name: " << this->name << "\nAge: " << this->age << endl;
    }
};
int main(){
    Student obj(1471,"Harshit",20);
    obj.displayStudentInfo();
    return 0;
}   
#include <iostream>
using namespace std;


class Complex{
    int real;
    int imag;
    public:
    Complex(int real,int imag){
        this->real=real;
        this->imag=imag;
    }
    void display(){
        cout << real << "+" << imag << "i"<< endl;
    }
    void operator - (Complex &obj){
        int realResult = this->real - obj.real;
        int imagResult = this->imag - obj.imag;
        Complex c3(realResult,imagResult);
        c3.display();
    }
};
int main(){
    cout << "Before: \n";
    Complex obj(10,5);
    obj.display();
    Complex obj2(4,2);
    obj2.display();
    cout << "Subtraction: \n";
    obj-obj2;
    return 0;
}
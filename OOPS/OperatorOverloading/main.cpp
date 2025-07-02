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
        void show(){
            cout << real << " + " << imag << "i" << endl;
        }
        Complex operator +(Complex &c){
            int realresult=this->real+c.real;
            int imagresult=this->imag+c.imag;
            Complex c3(realresult,imagresult);
            return c3;
        }
};
int main(){
    Complex c1(3,4);
    Complex c2(5,6);
    Complex c3=c1+c2;
    c3.show();
    return 0;
}
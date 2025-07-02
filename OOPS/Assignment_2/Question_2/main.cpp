#include <iostream>
using namespace std;

class Shape{
    protected:
    double dim1,dim2;
    public:
    virtual void getdata(int dim1,int dim2)=0;
    virtual void displayarea()=0;
};

class Triangle:public Shape{
    public:
    void getdata(int a,int b) override{
        dim1=a;
        dim2=b;
    }
    void displayarea() override{
        cout << "Area: " << 0.5*dim1*dim2 << endl;
    }
};
class Rectangle:public Shape{
    void getdata(int a,int b) override{
        dim1=a;
        dim2=b;
    }
    void displayarea() override{
        cout << "Area: " << dim1*dim2 << endl;
    }
};
int main(){
    Shape *ptr;
    Triangle obj;
    ptr=&obj;
    ptr->getdata(10,5);
    ptr->displayarea();
    Rectangle objr;
    ptr=&objr;
    ptr->getdata(4,4);
    ptr->displayarea();
    return 0;

}
#include <iostream>
using namespace std;

class Area{
    public:
    virtual void area()=0;
};

class circle: public Area{
    int radius;
    public:
    circle(int radius){
        this->radius=radius;
    }
    void area() override{
        cout << 3.14 * radius * radius << endl;
    }
};
class square: public Area{
    int side;
    public:
    square(int side){
        this->side=side;
    }
    void area() override {
        cout << side* side <<endl;
    }
};
int main(){
    Area *ptr;
    circle obj(10);
    square objs(4);
    ptr=&obj;
    ptr->area();
    ptr=&objs;
    ptr->area();

}
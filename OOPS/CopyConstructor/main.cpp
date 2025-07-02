#include <iostream>
using namespace std;

class Sum{
    int a,b;
    public:
    Sum(int a,int b){
        this->a=a;
        this->b=b;
    }
    Sum(Sum &original){
        this->a=original.a +1;
        this->b=original.b +1;
    }
    void getNum(){
        cout << a << " " << b;
    }
};
int main(){ 
    Sum obj(5,6);
    Sum obj_c(obj);
    obj_c.getNum();
    return 0;

}
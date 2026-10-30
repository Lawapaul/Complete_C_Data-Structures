#include <iostream>
using namespace std;

class Payment{
    public:
        virtual void type(){
            cout << "Generic Payment" << endl;
        }
};
class card: public Payment{
    public:
        void type() override{
            cout << "Card Payment" << endl;
        }
};
class UPI: public Payment{
    public:
        void type() override{
            cout << "UPI Payment" << endl;
        }
};
void payment_type(Payment* p){
    p->type();
}
int main(){
    UPI obj1;
    card obj2;
    payment_type(&obj1);
    payment_type(&obj2);

}
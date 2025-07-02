#include <iostream>
using namespace std;

//Friend Class
class A{
    private:
    string secrete = "Confidential...";
    friend class B;
    friend void display_outside(A &obj);
};
class B{
    public:
    void display(A &obj){
        cout << obj.secrete << endl;
    }
};

//Friend Function

void display_outside(A &obj){
    cout << obj.secrete << endl;
}
int main(){
    A obj1;
    B obj;
    obj.display(obj1);
    cout << "Friend Function: " << endl;
    display_outside(obj1);
    return 0; 

} 
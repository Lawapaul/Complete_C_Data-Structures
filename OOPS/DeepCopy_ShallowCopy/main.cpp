#include <iostream>
#include <string>
using namespace std;



//Shallow Copy
// class Car{
//     string name;
//     string color;
//     public:
//     int* mileage;
//     Car(string name,string color){
//         this->name=name;
//         this->color=color;
//         mileage=new int;
//         *mileage=10;
//     }
//     Car(Car &original){
//         name=original.name;
//         color=original.color;
//         mileage=original.mileage;
//     }
// };

//Deep
class Car{
    string name;
    string color;
    public:
    int* mileage;
    Car(string name,string color){
        this->name=name;
        this->color=color;
        mileage=new int;
        *mileage=10;
    }
    Car(Car &original){
        name=original.name;
        color=original.color;
        mileage=new int;
        *mileage=*original.mileage;
    }
};



int main(){
    Car obj("Mahindra","Scorpio N");
    Car objc(obj);
    *objc.mileage=15;
    cout << *obj.mileage;
}
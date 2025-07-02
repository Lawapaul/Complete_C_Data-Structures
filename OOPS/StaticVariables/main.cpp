#include <iostream>
using namespace std;

//Without static
class example{
    public:
    int count=0;
    void increment(){
        count++;
        cout << count << endl;
    }
};

//With Static
class s_example{
    public:
    static int count;
    void increment(){
        count++;
        cout << count << endl;
    }
};
int s_example::count=0;
int main(){
    cout << "Before:\n";
    example obj;
    obj.increment();
    example obj1;
    obj1.increment();
    cout << "After\n";
    s_example obj2;
    obj2.increment();
    s_example obj3;
    obj3.increment();
    return 0;
}
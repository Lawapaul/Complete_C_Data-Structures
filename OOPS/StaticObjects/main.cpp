#include <iostream>
using namespace std;

class example{
    public:
    example(){
        cout << "Intialized..." << endl;
    }
    ~example(){
        cout << "Completed and freeing up the space..." << endl;
    }
};
int main(){
    static example obj1;
    cout << "Ending of the program" << endl;
    return 0;
}
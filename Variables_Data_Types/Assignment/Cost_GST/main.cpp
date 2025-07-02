#include <iostream>
using namespace std;

int main(){
    float pencil,pen,eraser;
    cin >> pencil >> pen >> eraser;
    cout << "Total Cost including GST: " << (0.18 * (pencil + pen + eraser)) + (pencil + pen + eraser);
    return 0;
}
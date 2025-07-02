#include <iostream>
using namespace std;

void update(int &a){
    a=30;
}

int main(){
    int a;
    cin >> a;
    cout << "Before: " << a << endl;
    update(a);
    cout << "After: " << a << endl;
}
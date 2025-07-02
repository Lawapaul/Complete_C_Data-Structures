#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    cout << ((num != 0) ? ((num > 0) ? "positive" : "negative") : "Zero");
    return 0;
}
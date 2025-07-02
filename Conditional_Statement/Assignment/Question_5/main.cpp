#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    int temp=num;
    int digit = num%10;
    num/=10;
    int digit2=num%10;
    num/=10;
    int digit3=num%10;
    num/=10;
    cout << ((digit*digit*digit + digit2*digit2*digit2 + digit3*digit3*digit3) == temp ? "Armstrong" : "Not Armstrong");
    return 0;
}
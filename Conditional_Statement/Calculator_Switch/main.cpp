#include <iostream>
using namespace std;

int main(){
    int num1,num2;
    char op;
    cout << "Enter Number (num1 num2): ";
    cin >> num1 >> num2;
    cout << "Enter Operator (+,-,/,*): ";
    cin >> op;
    switch(op){
        case '+':
            cout << num1 + num2;
            break;
        case '-':
            cout << num1 - num2;
            break;
        case '*':
            cout << num1*num2;
            break;
        case '/':
            cout << num1/num2;
            break;
        default:
            cout << "Enter Valid Operator";
    }
    return 0;

}
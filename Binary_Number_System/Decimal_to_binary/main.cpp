#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a;
    cin >> a;
    int num=0;
    int power=0;
    while(a>0){
        int digit = a%2;
        num+=digit*pow(10,power);
        power++;
        a/=2;
    }
    cout << num;
    return 0;
}
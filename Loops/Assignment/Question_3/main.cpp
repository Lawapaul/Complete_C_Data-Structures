#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num,sum=0;
    cin >> num;
    int temp=num;
    while(num>0){
        int digit=num%10;
        sum+=pow(digit,3);
        num/=10;
    }
    cout << ((sum==temp) ? "Armstrong" : "Not Armstrong");
    return 0;
}
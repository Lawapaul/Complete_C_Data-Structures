#include <iostream>
using namespace std;

int sum(int n){
    if(n<10){
        return n;
    }
    int sum_digits=0;
    while(n>0){
        sum_digits+=n%10;
        n/=10;
    }
    return sum(sum_digits);
}

int main(){
    int n;
    cin >> n;
    cout << sum(n);
}
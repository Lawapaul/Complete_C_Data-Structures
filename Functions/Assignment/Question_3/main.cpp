#include <iostream>
#include <cmath>
using namespace std;

int quadratic(int a,int b){
    return pow(a,2) + pow(b,2) + 2*a*b;
}
int main(){
    int a,b;
    cin >> a >> b;
    cout << quadratic(a,b);
    return 0;
}
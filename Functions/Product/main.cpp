#include <iostream>
using namespace std;

int product(int a,int b){
    return a*b;
}
int main(){
    int a,b;
    cin >> a >> b;
    cout << product(a,b);
    return 0;
}
#include <iostream>
using namespace std;


bool check(int a){
    if(a%2==0){
        return true;
    }
    return false;
}
int main(){
    int a;
    cin >> a;
    cout << ((check(a)) ? "Even" :"Odd");
    return 0;
}
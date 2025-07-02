#include <iostream>
using namespace std;


bool isPrime(int a){
    if(a==0 || a==1){
        return false;
    }
    for(int i=2;i*i<=a;i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    cout << ((isPrime(n)) ? "Prime" : "Not Prime");
    return 0;
}
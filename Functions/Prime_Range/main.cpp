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
    for(int i=2;i<=n;i++){
        if(isPrime(i)){
            cout << i << endl;
        }
    }
    return 0;
}
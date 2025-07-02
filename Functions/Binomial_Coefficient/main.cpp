#include <iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int binomial_C(int n,int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int main(){
    int n,r;
    cin >> n >> r;
    cout << binomial_C(n,r);
}
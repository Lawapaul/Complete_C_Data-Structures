#include <iostream>
using namespace std;

void Decreasing(int n){
    if(n==1){
        cout << 1 << endl;
    }
    else{
        cout << n << endl;
        Decreasing(n-1);
    }
}

int main(){
    int n;
    cin >> n;
    Decreasing(n);
    return 0;
}
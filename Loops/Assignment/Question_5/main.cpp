#include <iostream>
using namespace std;

int main(){
    int n,sum;
    cin >> n;
    int a=0;
    int b=1;
    for(int i=1;i<n;i++){
        cout << b << endl;
        sum=a+b;
        a=b;
        b=sum;
    }
    return 0;
}
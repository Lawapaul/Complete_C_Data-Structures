#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int sum=0;
    int count=0;
    while(a>0){
        int digit=a%10;
        sum+=digit*pow(2,count);
        count++;
        a/=10;
    }
    cout << sum;
}
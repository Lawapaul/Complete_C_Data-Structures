#include <iostream>
using namespace std;


int Power(int x,int n){
    if(n==0){
        return 1;
    }
    int power=Power(x,n/2);
    int result=power*power;
    if(n%2!=0){
        return x*result;
    }
    return result;
    
}
int main(){
    int x,n;
    cin >> x >> n;
    cout << Power(x,n);
}
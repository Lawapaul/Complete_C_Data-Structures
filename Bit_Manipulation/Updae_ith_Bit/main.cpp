#include <iostream>
using namespace std;

void update(int n,int val, int i){
    n=n & ~(1 << i);
    n=n | (val << i);
    cout  << n;
}
int main(){
    int n,val;
    int i;
    cin >> n >> val;
    cin >> i;
    update(n,val,i);
}
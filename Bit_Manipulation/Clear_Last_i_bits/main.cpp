#include <iostream>
using namespace std;

void clear(int num,int i){
    num = num & (~0<< i);
    cout << num;
}
int main(){
    int num,i;
    cin >> num >> i;
    clear(num,i);
    return 0;

}
#include <iostream>
using namespace std;

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a,b;
    cin >> a >> b;
    cout << "Before:\n" << "a = " << a << endl << "b = " << b << endl;
    swap(&a,&b);
    cout << "After:\n" << "a = " << a << endl << "b = " << b << endl;
    
}
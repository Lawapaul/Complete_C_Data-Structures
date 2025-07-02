#include <iostream>
using namespace std;

int largest(int a,int b,int c){
    
    if(a>b){
        if(a>c){
            return a;
        }
        else{
            return c;
        }
    }
    else{
        if(b>c){
            return b;
        }
        else{
            return c;
        }
    }
}
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    cout << largest(a,b,c);
    return 0;
}